#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FieldTrialParameterInterface.h"

namespace webrtc {

class FieldTrialFlag : public ::webrtc::FieldTrialParameterInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk3e7c3c;
    // NOLINTEND

public:
    // prevent constructor by default
    FieldTrialFlag& operator=(FieldTrialFlag const&);
    FieldTrialFlag(FieldTrialFlag const&);
    FieldTrialFlag();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool Parse(::std::optional<::std::string> str_value) /*override*/;

    // vIndex: 0
    virtual ~FieldTrialFlag() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FieldTrialFlag(::std::string_view key);

    MCNAPI FieldTrialFlag(::std::string_view key, bool default_value);

    MCNAPI explicit operator bool() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view key);

    MCNAPI void* $ctor(::std::string_view key, bool default_value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $Parse(::std::optional<::std::string> str_value);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
