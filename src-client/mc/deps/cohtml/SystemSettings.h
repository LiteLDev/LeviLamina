#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct SystemSettings {
public:
    // SystemSettings inner types declare
    // clang-format off
    struct FallBackFormats;
    // clang-format on

    // SystemSettings inner types define
    struct FallBackFormats {
    public:
        // FallBackFormats inner types declare
        // clang-format off
        struct FallBackFormat;
        // clang-format on

        // FallBackFormats inner types define
        struct FallBackFormat {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 8> mUnkcbb1ad;
            ::ll::UntypedStorage<8, 8> mUnk5a95e3;
            ::ll::UntypedStorage<4, 4> mUnk9a6b49;
            // NOLINTEND

        public:
            // prevent constructor by default
            FallBackFormat& operator=(FallBackFormat const&);
            FallBackFormat(FallBackFormat const&);
            FallBackFormat();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkfc807c;
        ::ll::UntypedStorage<4, 4> mUnk96baaf;
        // NOLINTEND

    public:
        // prevent constructor by default
        FallBackFormats& operator=(FallBackFormats const&);
        FallBackFormats(FallBackFormats const&);
        FallBackFormats();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1ed39f;
    ::ll::UntypedStorage<8, 8>  mUnk9e46b1;
    ::ll::UntypedStorage<8, 8>  mUnkbf86b0;
    ::ll::UntypedStorage<8, 8>  mUnk1d16a2;
    ::ll::UntypedStorage<8, 8>  mUnk24fa44;
    ::ll::UntypedStorage<8, 8>  mUnk4eba72;
    ::ll::UntypedStorage<8, 8>  mUnk4b5aaf;
    ::ll::UntypedStorage<4, 16> mUnk3ec999;
    ::ll::UntypedStorage<4, 16> mUnkd04d4f;
    ::ll::UntypedStorage<8, 8>  mUnk7395bc;
    ::ll::UntypedStorage<8, 8>  mUnkef2bf7;
    ::ll::UntypedStorage<4, 4>  mUnk3d526f;
    ::ll::UntypedStorage<1, 1>  mUnk104bb4;
    ::ll::UntypedStorage<1, 1>  mUnka48961;
    ::ll::UntypedStorage<8, 8>  mUnk2247b8;
    ::ll::UntypedStorage<4, 4>  mUnk5081fc;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemSettings& operator=(SystemSettings const&);
    SystemSettings(SystemSettings const&);
    SystemSettings();
};

} // namespace cohtml
