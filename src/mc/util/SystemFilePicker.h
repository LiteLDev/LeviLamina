#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class SystemFilePicker {
public:
    // prevent constructor by default
    SystemFilePicker& operator=(SystemFilePicker const&);
    SystemFilePicker(SystemFilePicker const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SystemFilePicker() = default;

    // vIndex: 1
    virtual void initFilePick(class Core::Path const& filePath, std::function<void(bool, struct FileInfo)> callback);

    // vIndex: 2
    virtual uint64 readBytes(struct FileInfo const& file, uint64 offset, uint64 bufferSize, std::vector<uchar>& buffer);

    // vIndex: 3
    virtual bool
    writeBytes(struct FileInfo const& file, uint64 offset, uint64 bufferSize, std::vector<uchar> const& buffer);

    MCAPI SystemFilePicker();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI struct FileInfo _fillFileInfo(class Core::Path const& filePath);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void initFilePick$(class Core::Path const& filePath, std::function<void(bool, struct FileInfo)> callback);

    MCAPI uint64 readBytes$(struct FileInfo const& file, uint64 offset, uint64 bufferSize, std::vector<uchar>& buffer);

    MCAPI bool
    writeBytes$(struct FileInfo const& file, uint64 offset, uint64 bufferSize, std::vector<uchar> const& buffer);

    // NOLINTEND
};
