/**
 * @file  Core.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace Core.
 *
 */
namespace Core {

#define AFTER_EXTRA
// Add Member There
class IFileSystem;
enum class FileBufferingMode;
enum class LevelStorageState;
enum class DirectoryIterationFlags;
template <typename T0, int i1>
class StackString {
public:
    StackString() = delete;
    StackString(StackString const&) = delete;
    StackString(StackString const&&) = delete;
};
template <typename T0, typename T1>
class Subject {
public:
    Subject() = delete;
    Subject(Subject const&) = delete;
    Subject(Subject const&&) = delete;
};
class FileStorageArea {
public:
    FileStorageArea() = delete;
    FileStorageArea(FileStorageArea const&) = delete;
    FileStorageArea(FileStorageArea const&&) = delete;
};
class StringSpan {
public:
    StringSpan() = delete;
    StringSpan(StringSpan const&) = delete;
    StringSpan(StringSpan const&&) = delete;
};
class FileOpenMode {
public:
    FileOpenMode() = delete;
    FileOpenMode(FileOpenMode const&) = delete;
    FileOpenMode(FileOpenMode const&&) = delete;
};

struct LevelStorageResult {
    LevelStorageResult() = delete;
    LevelStorageResult(LevelStorageResult const&) = delete;
    LevelStorageResult(LevelStorageResult const&&) = delete;
};
class Result {
public:
    Result() = delete;
    Result(Result const&) = delete;
    Result(Result const&&) = delete;
};
class FileSystemImpl {
public:
    FileSystemImpl() = delete;
    FileSystemImpl(FileSystemImpl const&) = delete;
    FileSystemImpl(FileSystemImpl const&&) = delete;
};
class SingleThreadedLock {
public:
    SingleThreadedLock() = delete;
    SingleThreadedLock(SingleThreadedLock const&) = delete;
    SingleThreadedLock(SingleThreadedLock const&&) = delete;
};

class PathPart {
public:
    std::string mUtf8StdString;
};

class Path {
public:
    PathPart mPath;
    Path(string a1) {
        mPath.mUtf8StdString = a1;
    }
};

template <typename T>
class PathBuffer {
    T value;

public:
    T& get() {
        return value;
    }
    operator T&() noexcept {
        return value;
    }
    operator T const&() const noexcept {
        return value;
    }
};


class FilePathManager {
public:
    FilePathManager() = delete;
    FilePathManager(FilePathManager const&) = delete;
    FilePathManager(FilePathManager const&&) = delete;
};
class Profile {
struct FileCounters {
    FileCounters() = delete;
    FileCounters(FileCounters const&) = delete;
    FileCounters(FileCounters const&&) = delete;
};
Profile() = delete;
Profile(Profile const&) = delete;
Profile(Profile const&&) = delete;
};
enum class FileAccessType;

#undef AFTER_EXTRA
    /**
     * @symbol  ?RESULT_FAILED_MESSAGE\@Core\@\@3PEBDEB
     */
    MCAPI extern char const * RESULT_FAILED_MESSAGE;
    /**
     * @symbol  ?RESULT_NOT_IMPLEMENTED_MESSAGE\@Core\@\@3PEBDEB
     */
    MCAPI extern char const * RESULT_NOT_IMPLEMENTED_MESSAGE;
    /**
     * @symbol  ?RESULT_SUCCEEDED_MESSAGE\@Core\@\@3PEBDEB
     */
    MCAPI extern char const * RESULT_SUCCEEDED_MESSAGE;
    /**
     * @symbol  ??ICore\@\@YA_KW4DirectoryIterationFlags\@0\@0\@Z
     */
    MCAPI unsigned __int64 operator&(enum class Core::DirectoryIterationFlags, enum class Core::DirectoryIterationFlags);
    /**
     * @symbol  ??UCore\@\@YA?AW4DirectoryIterationFlags\@0\@W410\@0\@Z
     */
    MCAPI enum class Core::DirectoryIterationFlags operator|(enum class Core::DirectoryIterationFlags, enum class Core::DirectoryIterationFlags);
    /**
     * @symbol  ?sRootStorageArea\@Core\@\@3V?$shared_ptr\@VFileStorageArea\@Core\@\@\@std\@\@A
     */
    MCAPI extern class std::shared_ptr<class Core::FileStorageArea> sRootStorageArea;
    /**
     * @symbol  ?starts_with\@Core\@\@YA_NVStringSpan\@1\@0\@Z
     */
    MCAPI bool starts_with(class Core::StringSpan, class Core::StringSpan);
    /**
     * @symbol  ?transferDirectory\@Core\@\@YA?AVResult\@1\@PEAVFileSystemImpl\@1\@AEBVPath\@1\@01AEBV?$function\@$$A6A?AVResult\@Core\@\@AEBVPath\@2\@0\@Z\@std\@\@\@Z
     */
    MCAPI class Core::Result transferDirectory(class Core::FileSystemImpl *, class Core::Path const &, class Core::FileSystemImpl *, class Core::Path const &, class std::function<class Core::Result (class Core::Path const &, class Core::Path const &)> const &);

};