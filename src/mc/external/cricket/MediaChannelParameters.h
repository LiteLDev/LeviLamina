#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct MediaChannelParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb96711;
    ::ll::UntypedStorage<8, 24> mUnk42e435;
    ::ll::UntypedStorage<1, 1>  mUnk54612f;
    ::ll::UntypedStorage<1, 2>  mUnk353a07;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaChannelParameters& operator=(MediaChannelParameters const&);
    MediaChannelParameters(MediaChannelParameters const&);
    MediaChannelParameters();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MediaChannelParameters();

    virtual ::std::map<::std::string, ::std::string> ToStringMap() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::map<::std::string, ::std::string> $ToStringMap() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
