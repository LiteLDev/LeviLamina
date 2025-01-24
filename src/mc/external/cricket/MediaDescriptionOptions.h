#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class SimulcastLayerList; }
namespace cricket { struct RidDescription; }
// clang-format on

namespace cricket {

struct MediaDescriptionOptions {
public:
    // prevent constructor by default
    MediaDescriptionOptions& operator=(MediaDescriptionOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddAudioSender(::std::string const&, ::std::vector<::std::string> const&);

    MCAPI void AddSenderInternal(
        ::std::string const&,
        ::std::vector<::std::string> const&,
        ::std::vector<::cricket::RidDescription> const&,
        ::cricket::SimulcastLayerList const&,
        int
    );

    MCAPI void AddVideoSender(
        ::std::string const&,
        ::std::vector<::std::string> const&,
        ::std::vector<::cricket::RidDescription> const&,
        ::cricket::SimulcastLayerList const&,
        int
    );

    MCAPI MediaDescriptionOptions(::cricket::MediaDescriptionOptions&&);

    MCAPI MediaDescriptionOptions(::cricket::MediaDescriptionOptions const&);

    MCAPI ::cricket::MediaDescriptionOptions& operator=(::cricket::MediaDescriptionOptions&&);

    MCAPI ~MediaDescriptionOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::MediaDescriptionOptions&&);

    MCAPI void* $ctor(::cricket::MediaDescriptionOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
