#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IStyleTextureInfoProvider {
public:
    // IStyleTextureInfoProvider inner types declare
    // clang-format off
    struct Info;
    // clang-format on

    // IStyleTextureInfoProvider inner types define
    struct Info {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 16> mUnk44019e;
        ::ll::UntypedStorage<4, 8>  mUnk555a8e;
        // NOLINTEND

    public:
        // prevent constructor by default
        Info& operator=(Info const&);
        Info(Info const&);
        Info();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStyleTextureInfoProvider() = default;

    virtual ::std::optional<::IStyleTextureInfoProvider::Info>
    getStyleTextureInfo(::std::string_view texturePath) const = 0;
    // NOLINTEND
};
