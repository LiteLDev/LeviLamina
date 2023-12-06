#pragma once

#include "ll/api/event/filesystem/FileActionEvent.h"

#include <array>
#include <atomic>
#include <condition_variable>
#include <filesystem>
#include <functional>
#include <future>
#include <iostream>
#include <mutex>
#include <string>
#include <system_error>
#include <thread>
#include <vector>

#include "ll/api/base/ErrorInfo.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/io/FileUtils.h"

#include "windows.h"

namespace ll::event::inline fs {
static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase& l);
// modified from Thomas Monkman's
class FileWatcher : public Emitter<FileActionEvent, emitterFactory> {
public:
    using Path = std::filesystem::path;

private:
    std::function<void(Path const& file, FileActionType eventType)> callback;

    std::wstring filename; // not empty for single file

    std::thread watchThread;

    std::condition_variable                      cv;
    std::mutex                                   callbackMutex;
    std::vector<std::pair<Path, FileActionType>> callbackInfo;
    std::thread                                  callbackThread;

    std::promise<void> running;
    std::atomic<bool>  destory{false};

    void* directoryHandle{nullptr};
    void* closeEvent{nullptr};

    void init() {

        closeEvent = CreateEventW(nullptr, TRUE, FALSE, nullptr);
        if (!closeEvent) {
            throw ll::error_info::getWinLastError();
        }


        callbackThread = std::thread([this]() {
            try {
                while (!destory) {
                    std::unique_lock lock(callbackMutex);
                    if (callbackInfo.empty() && !destory) {
                        cv.wait(lock, [this] { return !callbackInfo.empty() || destory; });
                    }
                    decltype(callbackInfo) callback_information = {};
                    std::swap(callback_information, callbackInfo);
                    lock.unlock();

                    for (const auto& file : callback_information) {
                        try {
                            callback(file.first, file.second);
                        } catch (...) {}
                    }
                }
            } catch (...) {
                try {
                    running.set_exception(std::current_exception());
                } catch (...) {} // set_exception() may throw too
            }
        });

        watchThread = std::thread([this]() {
            try {
                std::vector<BYTE> buffer(1024 * 256);
                DWORD             bytes_returned = 0;
                OVERLAPPED        overlapped_buffer{0};

                overlapped_buffer.hEvent = CreateEventW(nullptr, TRUE, FALSE, nullptr);
                if (!overlapped_buffer.hEvent) {
                    std::cerr << "Error creating monitor event" << std::endl;
                }

                std::array<void*, 2> handles{overlapped_buffer.hEvent, closeEvent};

                bool async_pending;
                running.set_value();
                do {
                    std::vector<std::pair<Path, FileActionType>> parsed_information;
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
                            throw ll::error_info::getWinLastError();
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
                                    Path{changed_file},
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
                        std::lock_guard lock(callbackMutex);
                        callbackInfo.insert(callbackInfo.end(), parsed_information.begin(), parsed_information.end());
                    }
                    cv.notify_one();
                } while (!destory);

                if (async_pending) {
                    // clean up running async io
                    CancelIo(directoryHandle);
                    GetOverlappedResult(directoryHandle, &overlapped_buffer, &bytes_returned, TRUE);
                }
            } catch (...) {
                try {
                    running.set_exception(std::current_exception());
                } catch (...) {} // set_exception() may throw too
            }
        });

        std::future<void> future = running.get_future();
        future.get(); // block until the monitor_directory is up and running
    }

    void destroy() {
        destory = true;
        running = std::promise<void>();

        SetEvent(closeEvent);

        cv.notify_one();
        watchThread.join();
        callbackThread.join();

        CloseHandle(directoryHandle);
    }

    bool passFilter(std::wstring const& filePath) {
        if (!filename.empty()) {
            // if we are watching a single file, only that file should trigger action
            return Path(filePath).filename() == filename;
        }
        return true;
    }

    void* getDirectory(Path const& path) {
        Path watch_path = [this, &path]() {
            if (std::filesystem::is_directory(path)) {
                return path;
            } else {
                filename = path.filename();
                if (!path.has_parent_path()) {
                    return Path{u8"./"};
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
            throw ll::error_info::getWinLastError();
        }
        return directory;
    }

public:
    FileWatcher(Path const& path, std::function<void(Path const&, FileActionType)> callback)
    : callback(std::move(callback)),
      directoryHandle(getDirectory(path)) {
        init();
    }

    ~FileWatcher() override { destroy(); }
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase& l) {
    auto& path = ((Listener<FileActionEvent>&)l).path;
    return std::make_unique<FileWatcher>(
        file_utils::u8path(path),
        [id =
             (std::string{getEventId<FileActionEvent>.name} + "|" + path
             )](FileWatcher::Path const& p, FileActionType e) {
            FileActionEvent ev{p, e};
            ll::event::EventBus::getInstance().publish(ev, EventId{id});
        }
    );
}
} // namespace ll::event::inline fs
