#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AttributeTrack;
// clang-format on

class AttributeLayerTrack {
public:
    // AttributeLayerTrack inner types declare
    // clang-format off
    class Builder;
    // clang-format on

    // AttributeLayerTrack inner types define
    class Builder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>  mUnk51ad10;
        ::ll::UntypedStorage<4, 8>   mUnk68fc11;
        ::ll::UntypedStorage<8, 136> mUnk70b049;
        // NOLINTEND

    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder(Builder const&);
        Builder();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::AttributeTrack>> mTracks;
    ::ll::TypedStorage<4, 4, int>                                                    mPriority;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mAttributeLayerName;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mPhase;
    // NOLINTEND
};
