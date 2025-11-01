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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf9665f;
    ::ll::UntypedStorage<8, 32> mUnk994276;
    ::ll::UntypedStorage<4, 4> mUnka3643b;
    ::ll::UntypedStorage<1, 1> mUnk8fe5bf;
    ::ll::UntypedStorage<1, 3> mUnk932a72;
    ::ll::UntypedStorage<8, 24> mUnk34f658;
    ::ll::UntypedStorage<8, 24> mUnk7e750c;
    ::ll::UntypedStorage<8, 24> mUnk2680bb;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaDescriptionOptions& operator=(MediaDescriptionOptions const&);
    MediaDescriptionOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddAudioSender(::std::string const& track_id, ::std::vector<::std::string> const& stream_ids);

    MCNAPI void AddSenderInternal(::std::string const& track_id, ::std::vector<::std::string> const& stream_ids, ::std::vector<::cricket::RidDescription> const& rids, ::cricket::SimulcastLayerList const& simulcast_layers, int num_sim_layers);

    MCNAPI void AddVideoSender(::std::string const& track_id, ::std::vector<::std::string> const& stream_ids, ::std::vector<::cricket::RidDescription> const& rids, ::cricket::SimulcastLayerList const& simulcast_layers, int num_sim_layers);

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

}
