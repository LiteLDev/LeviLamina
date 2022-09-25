#pragma once
#include "api/APIHelp.h"

#include <fstream>
#include <string>
#include <mutex>

//////////////////// APIs ////////////////////

Local<Value> OpenFile(const Arguments& args);

Local<Value> FileReadFrom(const Arguments& args);
Local<Value> FileWriteTo(const Arguments& args);
Local<Value> FileWriteLine(const Arguments& args);

Local<Value> DirCreate(const Arguments& args);
Local<Value> PathCopy(const Arguments& args);
Local<Value> PathMove(const Arguments& args);
Local<Value> PathRename(const Arguments& args);
Local<Value> PathDelete(const Arguments& args);
Local<Value> PathExists(const Arguments& args);
Local<Value> CheckIsDir(const Arguments& args);
Local<Value> GetFileSize(const Arguments& args);
Local<Value> GetFilesList(const Arguments& args);


//////////////////// Classes ////////////////////
class FileClass : public ScriptClass {
private:
    std::fstream file;
    string path;
    bool isBinary;
    std::mutex lock;

public:
    explicit FileClass(const Local<Object>& scriptObj, std::fstream&& f, const std::string& path, bool isBinary);
    explicit FileClass(std::fstream&& f, const std::string& path, bool isBinary);
    static FileClass* constructor(const Arguments& args);

    Local<Value> getPath();
    Local<Value> getAbsolutePath();
    Local<Value> getSize();

    Local<Value> readSync(const Arguments& args);
    Local<Value> readLineSync(const Arguments& args);
    Local<Value> readAllSync(const Arguments& args);
    Local<Value> writeSync(const Arguments& args);
    Local<Value> writeLineSync(const Arguments& args);

    Local<Value> read(const Arguments& args);
    Local<Value> readLine(const Arguments& args);
    Local<Value> readAll(const Arguments& args);
    Local<Value> write(const Arguments& args);
    Local<Value> writeLine(const Arguments& args);

    Local<Value> seekTo(const Arguments& args);
    Local<Value> setSize(const Arguments& args);
    Local<Value> close(const Arguments& args);
    Local<Value> isEOF(const Arguments& args);
    Local<Value> flush(const Arguments& args);
    Local<Value> errorCode(const Arguments& args);
    Local<Value> clear(const Arguments& args);

    static Local<Value> readFromStatic(const Arguments& args) {
        return FileReadFrom(args);
    }
    static Local<Value> writeToStatic(const Arguments& args) {
        return FileWriteTo(args);
    }
    static Local<Value> writeLineStatic(const Arguments& args) {
        return FileWriteLine(args);
    }

    static Local<Value> createDir(const Arguments& args) {
        return DirCreate(args);
    }
    static Local<Value> copy(const Arguments& args) {
        return PathCopy(args);
    }
    static Local<Value> move(const Arguments& args) {
        return PathMove(args);
    }
    static Local<Value> rename(const Arguments& args) {
        return PathRename(args);
    }
    static Local<Value> del(const Arguments& args) {
        return PathDelete(args);
    }
    static Local<Value> exists(const Arguments& args) {
        return PathExists(args);
    }
    static Local<Value> checkIsDir(const Arguments& args) {
        return CheckIsDir(args);
    }
    static Local<Value> getFileSize(const Arguments& args) {
        return GetFileSize(args);
    }
    static Local<Value> getFilesList(const Arguments& args) {
        return GetFilesList(args);
    }

    // For Compatibility
    static Local<Object> newFile(std::fstream&& f, const std::string& path, bool isBinary);
    static Local<Value> open(const Arguments& args) {
        return OpenFile(args);
    }
};
extern ClassDefine<FileClass> FileClassBuilder;