#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renoir/UserGPUMemoryInfo.h"

namespace cohtml {

struct UserGPUMemoryInfo : public ::renoir::UserGPUMemoryInfo {
public:
    // UserGPUMemoryInfo inner types declare
    // clang-format off
    struct ExtraUserImageInfo;
    // clang-format on

    // UserGPUMemoryInfo inner types define
    struct ExtraUserImageInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk889e9c;
        ::ll::UntypedStorage<8, 8> mUnkf59f52;
        // NOLINTEND

    public:
        // prevent constructor by default
        ExtraUserImageInfo& operator=(ExtraUserImageInfo const&);
        ExtraUserImageInfo(ExtraUserImageInfo const&);
        ExtraUserImageInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkee97fb;
    // NOLINTEND

public:
    // prevent constructor by default
    UserGPUMemoryInfo& operator=(UserGPUMemoryInfo const&);
    UserGPUMemoryInfo(UserGPUMemoryInfo const&);
    UserGPUMemoryInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void PrintToLog() const = 0;

    virtual ~UserGPUMemoryInfo() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
