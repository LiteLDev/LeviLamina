#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Parameter.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct ReconfigurationResponseParameterConfig; }
// clang-format on

namespace dcsctp {

class ReconfigurationResponseParameter : public ::dcsctp::Parameter,
                                         public ::dcsctp::TLVTrait<::dcsctp::ReconfigurationResponseParameterConfig> {
public:
    // ReconfigurationResponseParameter inner types define
    enum class Result : int {
        KSuccessNothingToDo            = 0,
        KSuccessPerformed              = 1,
        KDenied                        = 2,
        KErrorWrongSSN                 = 3,
        KErrorRequestAlreadyInProgress = 4,
        KErrorBadSequenceNumber        = 5,
        KInProgress                    = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5e86fb;
    ::ll::UntypedStorage<4, 4> mUnk120eda;
    ::ll::UntypedStorage<4, 8> mUnk71c0f4;
    ::ll::UntypedStorage<4, 8> mUnk52d02c;
    // NOLINTEND

public:
    // prevent constructor by default
    ReconfigurationResponseParameter& operator=(ReconfigurationResponseParameter const&);
    ReconfigurationResponseParameter(ReconfigurationResponseParameter const&);
    ReconfigurationResponseParameter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    virtual ::std::string ToString() const /*override*/;

    virtual ~ReconfigurationResponseParameter() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::ReconfigurationResponseParameter> Parse(::rtc::ArrayView<uchar const> data);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SerializeTo(::std::vector<uchar>& out) const;

    MCNAPI ::std::string $ToString() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
