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
    MediaDescriptionOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddAudioSender(::std::string const&, ::std::vector<::std::string> const&);

    MCNAPI void AddSenderInternal(
        ::std::string const&,
        ::std::vector<::std::string> const&,
        ::std::vector<::cricket::RidDescription> const&,
        ::cricket::SimulcastLayerList const&,
        int
    );

    MCNAPI void AddVideoSender(
        ::std::string const&,
        ::std::vector<::std::string> const&,
        ::std::vector<::cricket::RidDescription> const&,
        ::cricket::SimulcastLayerList const&,
        int
    );

    MCNAPI MediaDescriptionOptions(::cricket::MediaDescriptionOptions&&);

    MCNAPI MediaDescriptionOptions(::cricket::MediaDescriptionOptions const&);

    MCNAPI ::cricket::MediaDescriptionOptions& operator=(::cricket::MediaDescriptionOptions&&);

    MCNAPI ~MediaDescriptionOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::MediaDescriptionOptions&&);

    MCNAPI void* $ctor(::cricket::MediaDescriptionOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
