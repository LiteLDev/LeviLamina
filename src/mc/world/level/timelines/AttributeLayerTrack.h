#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttributeLayerTrack {
public:
    // AttributeLayerTrack inner types declare
    // clang-format off
    class Builder;
    struct TrackEntry;
    // clang-format on

    // AttributeLayerTrack inner types define
    class Builder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>  mUnk51ad10;
        ::ll::UntypedStorage<4, 8>   mUnk68fc11;
        ::ll::UntypedStorage<8, 104> mUnk70b049;
        // NOLINTEND

    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder(Builder const&);
        Builder();
    };

    struct TrackEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk68e12f;
        ::ll::UntypedStorage<8, 80> mUnke84c76;
        // NOLINTEND

    public:
        // prevent constructor by default
        TrackEntry& operator=(TrackEntry const&);
        TrackEntry(TrackEntry const&);
        TrackEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeLayerTrack::TrackEntry>> mTracks;
    ::ll::TypedStorage<4, 4, int>                                               mPriority;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mAttributeLayerName;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mNoiseName;
    ::ll::TypedStorage<4, 4, uint>                                              mLocalTransitionTicks;
    // NOLINTEND
};
