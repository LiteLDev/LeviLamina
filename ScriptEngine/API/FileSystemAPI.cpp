#include "APIHelp.h"
#include "FileSystemAPI.h"
#include <Engine/TimeTaskSystem.h>
#include <Engine/LocalShareData.h>
#include <Engine/EngineManager.h>
#include <filesystem>
#include <fstream>
#include <string>
#include <Utils/FileHelper.h>

using namespace std::filesystem;
using namespace std;

//////////////////// Class Definition ////////////////////

enum class FileOpenMode : int
{
    ReadMode, WriteMode, AppendMode
};

ClassDefine<FileClass> FileClassBuilder =
    defineClass<FileClass>("File")
        .constructor(&FileClass::constructor)
        .instanceProperty("path", &FileClass::getPath)
        .instanceProperty("extension", &FileClass::getExtension)
        .instanceProperty("fileName", &FileClass::getFileName)
        .instanceProperty("absolutePath", &FileClass::getAbsolutePath)
        .instanceProperty("size", &FileClass::getSize)

        .instanceFunction("remove", &FileClass::remove)
        .instanceFunction("copyTo", &FileClass::copyTo)
        .instanceFunction("moveTo", &FileClass::moveTo)

        .instanceFunction("readSync", &FileClass::readSync)
        .instanceFunction("readLineSync", &FileClass::readLineSync)
        .instanceFunction("readAllSync", &FileClass::readAllSync)
        .instanceFunction("writeSync", &FileClass::writeSync)
        .instanceFunction("writeLineSync", &FileClass::writeLineSync)

        .instanceFunction("read", &FileClass::read)
        .instanceFunction("readLine", &FileClass::readLine)
        .instanceFunction("readAll", &FileClass::readAll)
        .instanceFunction("write", &FileClass::write)
        .instanceFunction("writeLine", &FileClass::writeLine)

        .instanceFunction("isEOF", &FileClass::isEOF)
        .instanceFunction("seekTo", &FileClass::seekTo)
        .instanceFunction("setSize", &FileClass::setSize)
        .instanceFunction("close", &FileClass::close)
        .instanceFunction("flush", &FileClass::flush)
        .instanceFunction("errorCode", &FileClass::errorCode)
        .instanceFunction("clear", &FileClass::clear)

        .property("ReadMode", [] { return Number::newNumber((int)FileOpenMode::ReadMode); })
        .property("WriteMode", [] { return Number::newNumber((int)FileOpenMode::WriteMode); })
        .property("AppendMode", [] { return Number::newNumber((int)FileOpenMode::AppendMode); })
    
        .function("readFrom", &FileClass::readFromStatic)
        .function("writeTo", &FileClass::writeToStatic)
        .function("writeLine", &FileClass::writeLineStatic)

        .function("createDir", &FileClass::createDir)
        .function("mkdir", &FileClass::createDir)
        .function("copy", &FileClass::copy)
        .function("move", &FileClass::move)
        .function("rename", &FileClass::rename)
        .function("delete", &FileClass::del)
        .function("exists", &FileClass::exists)
        .function("checkIsDir", &FileClass::checkIsDir)
        .function("getFileSize", &FileClass::getFileSize)
        .function("getFilesList", &FileClass::getFilesList)

        //For Compatibility
        .function("open", &FileClass::open)
        .build();

ClassDefine<DirectoryClass> DirectoryClassBuilder =
    defineClass<DirectoryClass>("Directory")
        .constructor(&DirectoryClass::constructor)
        .instanceProperty("path", &DirectoryClass::getPath)
        .instanceProperty("name", &DirectoryClass::getName)
        .instanceProperty("absolutePath", &DirectoryClass::getAbsolutePath)

        .instanceFunction("remove", &DirectoryClass::remove)
        .instanceFunction("rename", &DirectoryClass::rename)
        .instanceFunction("copyTo", &DirectoryClass::copyTo)
        .instanceFunction("moveTo", &DirectoryClass::moveTo)

        .instanceFunction("getChildren", &DirectoryClass::getChildren)
        .build();

//////////////////// Classes ////////////////////

//生成函数
FileClass::FileClass(const Local<Object>& scriptObj, std::fstream&& f, const std::string& path, bool isBinary)
    :ScriptClass(scriptObj)
{
    this->file = std::move(f);
    this->path = path;
    this->isBinary = isBinary;
}

FileClass::FileClass(std::fstream&& f, const std::string& path, bool isBinary)
    :ScriptClass(ScriptClass::ConstructFromCpp<FileClass>{})
{
    this->file = std::move(f);
    this->path = path;
    this->isBinary = isBinary;
}

FileClass* FileClass::constructor(const Arguments& args)
{
    CHECK_ARGS_COUNT_C(args, 2);
    CHECK_ARG_TYPE_C(args[0], ValueKind::kString);
    CHECK_ARG_TYPE_C(args[1], ValueKind::kNumber);
    if (args.size() >= 3)
        CHECK_ARG_TYPE_C(args[2], ValueKind::kBoolean);

    try {
        string path = args[0].toStr();
        CreateDirs(path);

        FileOpenMode fMode = (FileOpenMode)(args[1].toInt());
        // Auto Create
        if (fMode == FileOpenMode::ReadMode || fMode == FileOpenMode::WriteMode)
        {
            fstream tmp(path, ios_base::app);
            tmp.flush();
            tmp.close();
        }

        ios_base::openmode mode = ios_base::in;
        if (fMode == FileOpenMode::WriteMode)
        {
            mode |= ios_base::out;
            //mode |= ios_base::ate;
            mode |= ios_base::trunc;
        }
        else if (fMode == FileOpenMode::AppendMode)
        {
            mode |= ios_base::app;
        }

        bool isBinary = false;
        if (args.size() >= 3 && args[2].asBoolean().value())
        {
            isBinary = true;
            mode |= ios_base::binary;
        }

        fstream fs(path, mode);
        if (!fs.is_open())
        {
            LOG_ERROR_WITH_SCRIPT_INFO("Fail to Open File " + path + "!\n");
            return nullptr;
        }
        return new FileClass(args.thiz(), std::move(fs), path, isBinary);
    }
    catch (const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Open File " + args[0].asString().toString() + "!\n");
        return nullptr;
    }
    CATCH_C("Fail in OpenFile!");
}

//成员函数
Local<Value> FileClass::getPath()
{
    try {
        return String::newString(path);
    }
    CATCH("Fail in getPath!");
}

Local<Value> FileClass::getExtension()
{
    try {
        return String::newString(filesystem::path(path).extension().u8string());
    }
    CATCH("Fail in getExtension!");
}

Local<Value> FileClass::getFileName()
{
    try {
        return String::newString(filesystem::path(path).filename().u8string());
    }
    CATCH("Fail in getFileName!");
}

Local<Value> FileClass::getAbsolutePath()
{
    try {
        return String::newString(canonical(filesystem::path(str2wstr(path))).u8string());
    }
    CATCH("Fail in getAbsolutePath!");
}

Local<Value> FileClass::getSize()
{
    try {
        size_t cur = file.tellg();
        file.seekg(0, file.end);
        size_t size = file.tellg();
        file.seekg(cur, file.beg);

        return Number::newNumber((long long)size);
    }
    CATCH("Fail in getPath!");
}

Local<Value> FileClass::remove()
{
    try{
        file.close();
        return Boolean::newBoolean(remove_all(path) > 0);
    }
    catch(const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Delete " + path + "!\n");
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in FileRemove!");
}

Local<Value> FileClass::copyTo(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try{
        filesystem::copy(path, args[0].asString().toString());
        return Boolean::newBoolean(true);
    }
    catch(const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Copy " + args[0].asString().toString() + "!\n");
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in FileCopyTo!");
}

Local<Value> FileClass::moveTo(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try{
        auto pathTo = filesystem::path(args[0].asString().toString());
        filesystem::copy(path, pathTo);
        file.close();
        remove_all(path);
        return Boolean::newBoolean(true);
    }
    catch(const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Move " + path + "!\n");
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in FileMoveTo!");
}

Local<Value> FileClass::readSync(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        int cnt = args[0].toInt();
        char* buf = new char[cnt];
        file.read(buf, cnt);
        size_t bytes = file.gcount();

        Local<Value> res = isBinary ? ByteBuffer::newByteBuffer(buf, bytes).asValue() : String::newString(string_view(buf,bytes)).asValue();
        delete[] buf;
        return res;
    }
    CATCH("Fail in readSync!");
}

Local<Value> FileClass::readLineSync(const Arguments& args)
{
    try {
        string buf;
        getline(file, buf);
        return String::newString(buf);
    }
    CATCH("Fail in readLineSync!");
}

Local<Value> FileClass::readAllSync(const Arguments& args)
{
    try {
        string res((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        return isBinary ? ByteBuffer::newByteBuffer(res.data(), res.size()).asValue() : String::newString(res).asValue();
    }
    CATCH("Fail in readAllSync!");
}

Local<Value> FileClass::writeSync(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);

    try {
        if (args[0].isString())
        {
            file << args[0].toStr();
        }
        else if (args[0].isByteBuffer())
        {
            file.write((char*)args[0].asByteBuffer().getRawBytes(), args[0].asByteBuffer().byteLength());
        }
        else
        {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }
        return Boolean::newBoolean(!file.fail() && !file.bad());
    }
    CATCH("Fail in writeSync!");
}

Local<Value> FileClass::writeLineSync(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        file << args[0].toStr() << "\n";
        return Boolean::newBoolean(!file.fail() && !file.bad());
    }
    CATCH("Fail in writeLineSync!");
}

Local<Value> FileClass::read(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kFunction);

    try {
        int cnt = args[0].toInt();
        script::Global<Function> callbackFunc{ args[1].asFunction() };

        pool.enqueue([cnt, fp{ &file }, isBinary { isBinary }, lock { &lock },
            callback{ std::move(callbackFunc) }, engine{ EngineScope::currentEngine() }] ()
        {
            if (LL::isServerStopping())
                return;
            if (!EngineManager::isValid(engine))
                return;

            char* buf = new char[cnt];
            lock->lock();
            fp->read(buf, cnt);
            size_t bytes = fp->gcount();
            lock->unlock();

            EngineScope scope(engine);
            try
            {
                Local<Value> res = isBinary ? ByteBuffer::newByteBuffer(buf, bytes).asValue() : String::newString(string_view(buf, bytes)).asValue();
                delete[] buf;
                // dangerous
                NewTimeout(callback.get(), { res }, 1);
            }
            CATCH_IN_CALLBACK("ReadFile")
        });
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in read!");
}

Local<Value> FileClass::readLine(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kFunction);

    try {
        script::Global<Function> callbackFunc{ args[0].asFunction() };

        pool.enqueue([fp{ &file }, lock{ &lock },
            callback{ std::move(callbackFunc) }, engine{ EngineScope::currentEngine() }] ()
        {
            if (LL::isServerStopping())
                return;
            if (!EngineManager::isValid(engine))
                return;

            string buf;
            lock->lock();
            getline(*fp, buf);
            lock->unlock();

            EngineScope scope(engine);
            try
            {
                NewTimeout(callback.get(), { String::newString(buf) }, 1);
            }
            CATCH_IN_CALLBACK("FileReadLine")
        });
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in readLine!");
}

Local<Value> FileClass::readAll(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kFunction);

    try {
        script::Global<Function> callbackFunc{ args[0].asFunction() };

        pool.enqueue([fp{ &file }, isBinary{ isBinary }, lock{ &lock },
            callback{ std::move(callbackFunc) }, engine{ EngineScope::currentEngine() }]()
        {
            if (LL::isServerStopping())
                return;
            if (!EngineManager::isValid(engine))
                return;

            lock->lock();
            string res((std::istreambuf_iterator<char>(*fp)), std::istreambuf_iterator<char>());
            lock->unlock();

            EngineScope scope(engine);
            try
            {
                Local<Value> readed = isBinary ? ByteBuffer::newByteBuffer(res.data(), res.size()).asValue() : String::newString(res).asValue();
                NewTimeout(callback.get(), { readed }, 1);
            }
            CATCH_IN_CALLBACK("FileReadAll")
        });
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in readAll!");
}

Local<Value> FileClass::write(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kFunction);
    
    try {
        string data;
        bool isString = true;
        if (args[0].isString())
        {
            data = std::move(args[0].toStr());
        }
        else if (args[0].isByteBuffer())
        {
            isString = false;
            data = std::move(string((char*)args[0].asByteBuffer().getRawBytes(), args[0].asByteBuffer().byteLength()));
        }
        else
        {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }

        script::Global<Function> callbackFunc;
        if (args.size() >= 2) 
            callbackFunc = args[1].asFunction();

        pool.enqueue([fp{ &file }, lock{ &lock }, data{ std::move(data) }, isString, 
            callback{ std::move(callbackFunc) }, engine{ EngineScope::currentEngine() }]()
        {
            if (LL::isServerStopping())
                return;
            if (!EngineManager::isValid(engine))
                return;

            lock->lock();
            if (isString)
                *fp << data;
            else
                fp->write(data.data(), data.size());
            bool isOk = !fp->fail() && !fp->bad();
            lock->unlock();

            if (!callback.isEmpty())
            {
                EngineScope scope(engine);
                try
                {
                    NewTimeout(callback.get(), { Boolean::newBoolean(isOk) }, 1);
                }
                CATCH_IN_CALLBACK("WriteFile")
            }
        });
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in write!");
}

Local<Value> FileClass::writeLine(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kFunction);

    try {
        string data{ std::move(args[0].toStr()) };

        script::Global<Function> callbackFunc;
        if (args.size() >= 2)
            callbackFunc = args[1].asFunction();

        pool.enqueue([fp{ &file }, lock{ &lock }, data{ std::move(data) }, 
            callback{ std::move(callbackFunc) }, engine{ EngineScope::currentEngine() }]()
        {
            if (LL::isServerStopping())
                return;
            if (!EngineManager::isValid(engine))
                return;

            lock->lock();
            *fp << data << "\n";
            bool isOk = !fp->fail() && !fp->bad();
            lock->unlock();

            if (!callback.isEmpty())
            {
                EngineScope scope(engine);
                try
                {
                    NewTimeout(callback.get(), { Boolean::newBoolean(isOk) }, 1);
                }
                CATCH_IN_CALLBACK("FileWriteLine")
            }
        });
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in writeLine!");
}

Local<Value> FileClass::seekTo(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kBoolean);

    try {
        int pos = args[0].toInt();
        if (args[1].asBoolean().value())
        {
            //relative
            ios_base::seekdir way = ios_base::cur;
            file.seekg(pos, way);
            file.seekp(pos, way);
        }
        else
        {
            //absolute
            if (pos >= 0)
            {
                ios_base::seekdir way = ios_base::beg;
                file.seekg(pos, way);
                file.seekp(pos, way);
            }
            else
            {
                ios_base::seekdir way = ios_base::end;
                file.seekg(0, way);
                file.seekp(0, way);
            }
        }
        return Boolean::newBoolean(!file.fail() && !file.bad());
    }
    CATCH("Fail in seekTo!");
}

Local<Value> FileClass::setSize(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        return Boolean::newBoolean(_chsize_s((int)GetHANDLEfromFstream(file), args[0].asNumber().toInt64()) == 0);
    }
    CATCH("Fail in setSize!");
}

Local<Value> FileClass::close(const Arguments& args)
{
    try {
        file.close();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in flush!");
}

Local<Value> FileClass::isEOF(const Arguments& args)
{
    try {
        return Boolean::newBoolean(file.eof());
    }
    CATCH("Fail in isEOF!");
}

Local<Value> FileClass::flush(const Arguments& args)
{
    try {
        pool.enqueue([fp{ &file }, lock{ &lock }]()
        {
            lock->lock();
            fp->flush();
            lock->unlock();
        });
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in flush!");
}

Local<Value> FileClass::errorCode(const Arguments& args)
{
    try {
        file.flush();
        return Number::newNumber(errno);
    }
    CATCH("Fail in flush!");
}

Local<Value> FileClass::clear(const Arguments& args)
{
    try {
        file.clear();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in flush!");
}


//////////////////// APIs ////////////////////

Local<Value> DirCreate(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try{
        return Boolean::newBoolean(CreateDirs(args[0].toStr()));
    }
    catch(const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Create Dir "+ args[0].asString().toString() +"!\n");
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in CreateDir!");
}

Local<Value> PathDelete(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try{
        return Boolean::newBoolean(remove_all(args[0].asString().toString()) > 0);
    }
    catch(const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Delete " + args[0].asString().toString() + "!\n");
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in DeletePath!");
}

Local<Value> PathExists(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try{
        return Boolean::newBoolean(filesystem::exists(str2wstr(args[0].asString().toString())));
    }
    catch(const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Check " + args[0].asString().toString() + "!\n");
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in ExistsPath!");
}

Local<Value> PathCopy(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try{
        copy(args[0].asString().toString(),args[1].asString().toString());
        return Boolean::newBoolean(true);
    }
    catch(const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Copy " + args[0].asString().toString() + "!\n");
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in CopyPath!");
}

Local<Value> PathRename(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try{
        rename(args[0].asString().toString(),args[1].asString().toString());
        return Boolean::newBoolean(true);
    }
    catch(const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Rename " + args[0].asString().toString() + "!\n");
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in RenamePath!");
}

Local<Value> PathMove(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try{
        copy(args[0].asString().toString(),args[1].asString().toString());
        remove_all(args[0].asString().toString());
        return Boolean::newBoolean(true);
    }
    catch(const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Move " + args[0].asString().toString() + "!\n");
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in MovePath!");
}

Local<Value> CheckIsDir(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        path p(args[0].toStr());
        if (!exists(p))
            return Boolean::newBoolean(false);

        return Boolean::newBoolean(directory_entry(p).is_directory());
    }
    catch (const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Get Type of " + args[0].asString().toString() + "!\n");
        return Local<Value>();
    }
    CATCH("Fail in GetFilesList!");
}

Local<Value> GetFileSize(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        path p(args[0].toStr());
        if (!exists(p))
            return Number::newNumber(0);
        if(directory_entry(p).is_directory())
            return Number::newNumber(0);

        auto sz = file_size(p);
        return Number::newNumber((int64_t)sz);
    }
    catch (const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Get Size of " + args[0].asString().toString() + "!\n");
        return Local<Value>();
    }
    CATCH("Fail in GetFilesList!");
}

Local<Value> GetFilesList(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        auto fileList = GetFileNameList(args[0].toStr());

        Local<Array> arr = Array::newArray();
        for (auto& file : fileList)
            arr.add(String::newString(file));
        return arr;
    }
    CATCH("Fail in GetFilesList!");
}

Local<Value> FileReadFrom(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    
    try{
        auto content = ReadAllFile(args[0].toStr());
        if(!content)
            return Local<Value>();  //Null
        return String::newString(*content);
    }
    CATCH("Fail in FileReadAll!");
}

Local<Value> FileWriteTo(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    
    try{
        string path = args[0].toStr();
        CreateDirs(path);
        return Boolean::newBoolean(WriteAllFile(path, args[1].toStr(), false));
    }
    CATCH("Fail in FileWriteAll!");
}

Local<Value> FileWriteLine(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    
    try{
        string path = args[0].toStr();
        CreateDirs(path);

        std::ofstream fileWrite(path,std::ios::app);
        if(!fileWrite)
            return Boolean::newBoolean(false);
        fileWrite << args[1].toStr() << std::endl;
        return Boolean::newBoolean(fileWrite.good());
    }
    CATCH("Fail in FileWriteLine!");
}


//////////////////// For Compatibility ////////////////////

Local<Value> OpenFile(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
    if (args.size() >= 3)
        CHECK_ARG_TYPE(args[2], ValueKind::kBoolean);

    try {
        string path = args[0].toStr();
        CreateDirs(path);

        FileOpenMode fMode = (FileOpenMode)(args[1].toInt());
        ios_base::openmode mode = ios_base::in;
        if (fMode == FileOpenMode::WriteMode)
        {
            fstream tmp(path, ios_base::app);
            tmp.flush();
            tmp.close();
            mode |= ios_base::out;
        }
        else if (fMode == FileOpenMode::AppendMode)
            mode |= ios_base::app;

        bool isBinary = false;
        if (args.size() >= 3 && args[2].asBoolean().value())
        {
            isBinary = true;
            mode |= ios_base::binary;
        }

        fstream fs(path, mode);
        if (!fs.is_open())
        {
            LOG_ERROR_WITH_SCRIPT_INFO("Fail to Open File " + path + "!\n");
            return Local<Value>();
        }
        return FileClass::newFile(std::move(fs), path, isBinary);
    }
    catch (const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Open File " + args[0].asString().toString() + "!\n");
        return Local<Value>();
    }
    CATCH("Fail in OpenFile!");
}

Local<Object> FileClass::newFile(std::fstream&& f, const std::string& path, bool isBinary)
{
    auto newp = new FileClass(std::move(f), path, isBinary);
    return newp->getScriptObject();
}

//生成函数
DirectoryClass::DirectoryClass(const Local<Object>& scriptObj, const std::string& path)
    :ScriptClass(scriptObj)
{
    this->path = path;
}

DirectoryClass::DirectoryClass(const std::string& path)
    :ScriptClass(ScriptClass::ConstructFromCpp<FileClass>{})
{
    this->path = path;
}

DirectoryClass* DirectoryClass::constructor(const Arguments& args)
{
    CHECK_ARGS_COUNT_C(args, 1);
    CHECK_ARG_TYPE_C(args[0], ValueKind::kString);

    try {
        string path = args[0].toStr();
        if(exists(path) && !is_directory(path))
        {
            LOG_ERROR_WITH_SCRIPT_INFO("Path <" + args[0].asString().toString() + "> isn't a directory!\n");
            return nullptr;
        }
        CreateDirs(path);
        
        return new DirectoryClass(args.thiz(), path);
    }
    catch (const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Open Directory " + args[0].asString().toString() + "!\n");
        return nullptr;
    }
    CATCH_C("Fail in OpenDirectory!");
}

//成员函数
Local<Value> DirectoryClass::getName()
{
    try {
        string pathStr = path.u8string();
        return String::newString(pathStr.substr(pathStr.find_first_of('/') + 1));
    }
    CATCH("Fail in getName!");
}

Local<Value> DirectoryClass::getPath()
{
    try {
         return String::newString(path.u8string());
    }
    CATCH("Fail in getPath!");
}

Local<Value> DirectoryClass::getAbsolutePath()
{
    try {
        return String::newString(absolute(path).u8string());
    }
    CATCH("Fail in getAbsolutePath!");
}

Local<Value> DirectoryClass::remove()
{
    try{
        return Boolean::newBoolean(remove_all(path) > 0);
    }
    catch(const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Delete " + path.u8string() + "!\n");
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in DirectoryRemove!");
}

Local<Value> DirectoryClass::rename(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try{
        filesystem::rename(path, args[0].asString().toString());
        path = filesystem::path(args[0].asString().toString());
        return Boolean::newBoolean(true);
    }
    catch(const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Rename " + args[0].asString().toString() + "!\n");
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in DirectoryRename!");
}

Local<Value> DirectoryClass::copyTo(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try{
        copy(path,args[0].asString().toString());
        return Boolean::newBoolean(true);
    }
    catch(const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Copy " + args[0].asString().toString() + "!\n");
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in DirectoryCopyTo!");
}

Local<Value> DirectoryClass::moveTo(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try{
        auto pathTo = filesystem::path(args[0].asString().toString());
        copy(path, pathTo);
        remove_all(path);
        path = pathTo;
        return Boolean::newBoolean(true);
    }
    catch(const filesystem_error& e)
    {
        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Move " + path.u8string() + "!\n");
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in DirectoryMoveTo!");
}

Local<Value> DirectoryClass::getChildren()
{
    try {
        auto fileList = GetFileNameList(path.u8string());

        Local<Array> arr = Array::newArray();
        for (auto& file : fileList)
        {
            filesystem::path childPath = path / file;
            Local<Object> child = Object::newObject();
            child.set("name", childPath.filename());
            child.set("parentPath", path.u8string());
            child.set("isDir", Function::newFunction([childPath]()
            {
                return Boolean::newBoolean(is_directory(childPath));
            }));
            child.set("toString", Function::newFunction([file]()
            {
                return String::newString(file);
            }));
            child.set("get", Function::newFunction([childPath](const Arguments& args)
                -> Local<Value>
            {
                if (is_directory(childPath))
                {
                    auto instance = new DirectoryClass(childPath.u8string());
                    return instance->getScriptObject();
                }

                try
                {
                    FileOpenMode fMode = (FileOpenMode)(args[0].toInt());
                    ios_base::openmode mode = ios_base::in;
                    if (fMode == FileOpenMode::WriteMode)
                    {
                        mode |= ios_base::out;
                        mode |= ios_base::trunc;
                    }
                    else if (fMode == FileOpenMode::AppendMode)
                    {
                        mode |= ios_base::app;
                    }

                    bool isBinary = false;
                    if (args.size() >= 2 && args[1].asBoolean().value())
                    {
                        isBinary = true;
                        mode |= ios_base::binary;
                    }

                    fstream fs(childPath, mode);
                    if (!fs.is_open())
                    {
                        LOG_ERROR_WITH_SCRIPT_INFO("Fail to Open File " + childPath.u8string() + "!\n");
                        return Local<Value>();
                    }
                    auto instance = new  FileClass(std::move(fs), childPath.u8string(), isBinary);
                    return instance->getScriptObject();
                }
                CATCH("Fail in getFileIstance");
            }));
            
            arr.add(child);
        }
        return arr;
    }
    CATCH("Fail in getDirectoryChildren!");
}
