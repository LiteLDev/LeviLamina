#include "FileUtils.h"

#include <filesystem>
#include <future>

#include "ll/api/Logger.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/Config.h"

#include "windows.h"

#pragma comment(lib, "Version.lib")

namespace ll::inline utils::file_utils {
using namespace string_utils;
namespace fs = std::filesystem;

std::filesystem::path u8path(std::string_view src) { return std::filesystem::path{sv2u8sv(src)}; }

std::optional<std::string> readFile(const fs::path& filePath, bool isBinary) {
    if (!fs::exists(filePath)) {
        return std::nullopt;
    }
    std::ifstream           fRead;
    std::ios_base::openmode mode = std::ios_base::in;
    if (isBinary) mode |= std::ios_base::binary;
    fRead.open(filePath, mode);
    if (!fRead.is_open()) {
        return std::nullopt;
    }
    std::string data((std::istreambuf_iterator<char>(fRead)), {});
    fRead.close();
    return data;
}

bool writeFile(const fs::path& filePath, std::string_view content, bool isBinary) {
    std::ofstream           fWrite;
    std::ios_base::openmode mode = std::ios_base::out;
    if (isBinary) mode |= std::ios_base::binary;
    std::error_code ec;
    fs::create_directories(filePath.parent_path(), ec);
    fWrite.open(filePath, mode);
    if (!fWrite.is_open()) {
        return false;
    }
    fWrite << content;
    fWrite.close();
    return true;
}

static bool
getFileVersion(std::wstring_view filePath, ushort& ver1, ushort& ver2, ushort& ver3, ushort& ver4, uint& flag) {

    DWORD dwHandle = 0;
    DWORD dwLen    = GetFileVersionInfoSizeW(filePath.data(), &dwHandle);
    if (0 >= dwLen) {
        return false;
    }

    std::wstring data(dwLen, '\0');

    if (!GetFileVersionInfoW(filePath.data(), dwHandle, dwLen, data.data())) {
        return false;
    }

    VS_FIXEDFILEINFO* lpBuffer;
    uint              uLen = 0;
    if (!VerQueryValueW(data.c_str(), L"\\", (void**)&lpBuffer, &uLen)) {
        return false;
    }

    ver1 = (lpBuffer->dwFileVersionMS >> 16) & 0x0000FFFF;
    ver2 = lpBuffer->dwFileVersionMS & 0x0000FFFF;
    ver3 = (lpBuffer->dwFileVersionLS >> 16) & 0x0000FFFF;
    ver4 = lpBuffer->dwFileVersionLS & 0x0000FFFF;
    flag = lpBuffer->dwFileFlags;

    return true;
}

data::Version getVersion(std::filesystem::path const& filePath) {
    data::Version version;
    ushort        build_ver{};
    uint          flag{};
    if (!getFileVersion(filePath.wstring(), version.major, version.minor, version.patch, build_ver, flag)) {
        return {};
    } else {
        version.preRelease = data::PreRelease{};
        auto& vec          = version.preRelease->values;
        vec.emplace_back(build_ver);
        if (flag & VS_FF_DEBUG) vec.emplace_back("debug");
        if (flag & VS_FF_PRERELEASE) vec.emplace_back("preRelease");
        if (flag & VS_FF_PATCHED) vec.emplace_back("patched");
        if (flag & VS_FF_PRIVATEBUILD) vec.emplace_back("privateBuild");
        if (flag & VS_FF_INFOINFERRED) vec.emplace_back("infoInferred");
        if (flag & VS_FF_SPECIALBUILD) vec.emplace_back("specialBuild");
    }
    return version;
}

// modified from Thomas Monkman's
class FileWatcher::Impl {
private:
    std::function<void(std::filesystem::path const&, FileActionType)> mCallback;

    std::wstring mFilename; // not empty for single file

    std::thread mWatchThread;

    std::condition_variable                                       mCv;
    std::mutex                                                    mCallbackMutex;
    std::vector<std::pair<std::filesystem::path, FileActionType>> mCallbackInfo;
    std::thread                                                   mCallbackThread;

    std::promise<void> mRunning;
    std::atomic<bool>  mDestroy{false};

    void* directoryHandle{nullptr};
    void* closeEvent{nullptr};

    void init() {

        closeEvent = CreateEventW(nullptr, TRUE, FALSE, nullptr);
        if (!closeEvent) {
            throw ll::error_utils::getWinLastError();
        }


        mCallbackThread = std::thread([this]() {
            try {
                while (!mDestroy) {
                    std::unique_lock lock(mCallbackMutex);
                    if (mCallbackInfo.empty() && !mDestroy) {
                        mCv.wait(lock, [this] { return !mCallbackInfo.empty() || mDestroy; });
                    }
                    decltype(mCallbackInfo) callback_information = {};
                    std::swap(callback_information, mCallbackInfo);
                    lock.unlock();

                    for (const auto& file : callback_information) {
                        try {
                            mCallback(file.first, file.second);
                        } catch (...) {}
                    }
                }
            } catch (...) {
                try {
                    mRunning.set_exception(std::current_exception());
                } catch (...) {} // set_exception() may throw too
            }
        });

        mWatchThread = std::thread([this]() {
            try {
                std::vector<BYTE> buffer(1024 * 256);
                DWORD             bytes_returned = 0;
                OVERLAPPED        overlapped_buffer{};

                overlapped_buffer.hEvent = CreateEventW(nullptr, TRUE, FALSE, nullptr);

                std::array<void*, 2> handles{overlapped_buffer.hEvent, closeEvent};

                bool async_pending;
                mRunning.set_value();
                do {
                    std::vector<std::pair<std::filesystem::path, FileActionType>> parsed_information;
                    ReadDirectoryChangesW(
                        directoryHandle,
                        buffer.data(),
                        static_cast<DWORD>(buffer.size()),
                        TRUE,
                        FILE_NOTIFY_CHANGE_SECURITY | FILE_NOTIFY_CHANGE_CREATION | FILE_NOTIFY_CHANGE_LAST_ACCESS
                            | FILE_NOTIFY_CHANGE_LAST_WRITE | FILE_NOTIFY_CHANGE_SIZE | FILE_NOTIFY_CHANGE_ATTRIBUTES
                            | FILE_NOTIFY_CHANGE_DIR_NAME | FILE_NOTIFY_CHANGE_FILE_NAME,
                        &bytes_returned,
                        &overlapped_buffer,
                        nullptr
                    );

                    async_pending = true;

                    switch (WaitForMultipleObjects(2, handles.data(), FALSE, INFINITE)) {
                    case WAIT_OBJECT_0: {
                        if (!GetOverlappedResult(directoryHandle, &overlapped_buffer, &bytes_returned, TRUE)) {
                            throw ll::error_utils::getWinLastError();
                        }
                        async_pending = false;

                        if (bytes_returned == 0) {
                            break;
                        }

                        auto* file_information = reinterpret_cast<FILE_NOTIFY_INFORMATION*>(&buffer[0]);
                        do {
                            std::wstring changed_file{
                                file_information->FileName,
                                file_information->FileNameLength / sizeof(file_information->FileName[0])
                            };
                            if (passFilter(changed_file)) {
                                parsed_information.emplace_back(
                                    std::filesystem::path{changed_file},
                                    (FileActionType)file_information->Action
                                );
                            }
                            if (file_information->NextEntryOffset == 0) {
                                break;
                            }

                            file_information = reinterpret_cast<FILE_NOTIFY_INFORMATION*>(
                                reinterpret_cast<BYTE*>(file_information) + file_information->NextEntryOffset
                            );
                        } while (true);
                        break;
                    }
                    case WAIT_OBJECT_0 + 1: // quit
                    case WAIT_FAILED:
                        break;
                    }
                    // dispatch callbacks
                    {
                        std::lock_guard lock(mCallbackMutex);
                        mCallbackInfo.insert(mCallbackInfo.end(), parsed_information.begin(), parsed_information.end());
                    }
                    mCv.notify_one();
                } while (!mDestroy);

                if (async_pending) {
                    // clean up running async io
                    CancelIo(directoryHandle);
                    GetOverlappedResult(directoryHandle, &overlapped_buffer, &bytes_returned, TRUE);
                }
            } catch (...) {
                try {
                    mRunning.set_exception(std::current_exception());
                } catch (...) {} // set_exception() may throw too
            }
        });

        std::future<void> future = mRunning.get_future();
        future.get(); // block until the monitor_directory is up and running
    }

    void destroy() {
        mDestroy = true;
        mRunning = std::promise<void>();

        SetEvent(closeEvent);

        mCv.notify_one();
        mWatchThread.join();
        mCallbackThread.join();

        CloseHandle(directoryHandle);
    }

    bool passFilter(std::wstring const& filePath) {
        if (!mFilename.empty()) {
            // if we are watching a single file, only that file should trigger action
            return std::filesystem::path(filePath).filename() == mFilename;
        }
        return true;
    }

    void* getDirectory(std::filesystem::path const& path) {
        std::filesystem::path watch_path = [this, &path]() {
            if (std::filesystem::is_directory(path)) {
                return path;
            } else {
                mFilename = path.filename();
                if (!path.has_parent_path()) {
                    return std::filesystem::path{u8"./"};
                }
                return path.parent_path();
            }
        }();

        void* directory = CreateFileW(
            watch_path.c_str(),                                     // pointer to the file name
            FILE_LIST_DIRECTORY,                                    // access (read/write) mode
            FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, // share mode
            nullptr,                                                // security descriptor
            OPEN_EXISTING,                                          // how to create
            FILE_FLAG_BACKUP_SEMANTICS | FILE_FLAG_OVERLAPPED,      // file attributes
            nullptr
        ); // file with attributes to copy

        if (directory == INVALID_HANDLE_VALUE) {
            throw ll::error_utils::getWinLastError();
        }
        return directory;
    }

public:
    Impl(std::filesystem::path const& path, std::function<void(std::filesystem::path const&, FileActionType)> callback)
    : mCallback(std::move(callback)),
      directoryHandle(getDirectory(path)) {
        init();
    }

    ~Impl() { destroy(); }
};

FileWatcher::FileWatcher(
    std::filesystem::path const&                                      path,
    std::function<void(std::filesystem::path const&, FileActionType)> callback
)
: impl(std::make_unique<Impl>(path, std::move(callback))) {}

FileWatcher::~FileWatcher() = default;

} // namespace ll::inline utils::file_utils
