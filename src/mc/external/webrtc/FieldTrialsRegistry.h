#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FieldTrialsView.h"

namespace webrtc {

class FieldTrialsRegistry : public ::webrtc::FieldTrialsView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb95673;
    // NOLINTEND

public:
    // prevent constructor by default
    FieldTrialsRegistry& operator=(FieldTrialsRegistry const&);
    FieldTrialsRegistry(FieldTrialsRegistry const&);
    FieldTrialsRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FieldTrialsRegistry() /*override*/ = default;

    virtual ::std::string Lookup(::std::string_view key) const /*override*/;

    virtual ::std::string GetValue(::std::string_view) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $Lookup(::std::string_view key) const;


    // NOLINTEND
};

} // namespace webrtc
