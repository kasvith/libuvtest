#ifndef NFILE_H
#define NFILE_H

#include <filesystem>
#include <string>
#include <vector>

using namespace std;

namespace n8o {

// NFile conatins definitions for file handling
class NFile {
private:
  vector<char> data;
  string path;
  bool dir;
  bool exists;

public:
  NFile(const string path);
  void read(ios_base::openmode mode);
  void write(const vector<char> data, ios_base::openmode mode);
  string getAllString();
  vector<char> getAllBytes();
  size_t length();
  bool isDir();
  bool isExists();
};

inline bool NFile::isExists() { return exists; }

inline bool NFile::isDir() { return dir; }

inline size_t NFile::length() { return data.size(); }

inline vector<char> NFile::getAllBytes() { return data; }

inline string NFile::getAllString() { return string(data.begin(), data.end()); }

} // namespace neut

#endif
