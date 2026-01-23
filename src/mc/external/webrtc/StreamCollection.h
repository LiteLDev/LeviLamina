#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StreamCollectionInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
// clang-format on

namespace webrtc {

class StreamCollection : public ::webrtc::StreamCollectionInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb9298e;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamCollection& operator=(StreamCollection const&);
    StreamCollection(StreamCollection const&);
    StreamCollection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint64 count() /*override*/;

    virtual ::webrtc::MediaStreamInterface* at(uint64 index) /*override*/;

    virtual ::webrtc::MediaStreamInterface* find(::std::string const& id) /*override*/;

    virtual ::webrtc::MediaStreamTrackInterface* FindAudioTrack(::std::string const& id) /*override*/;

    virtual ::webrtc::MediaStreamTrackInterface* FindVideoTrack(::std::string const& id) /*override*/;

    virtual ~StreamCollection() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddStream(::webrtc::scoped_refptr<::webrtc::MediaStreamInterface> stream);

    MCNAPI void RemoveStream(::webrtc::MediaStreamInterface* remove_stream);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::StreamCollection> Create();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $count();

    MCNAPI ::webrtc::MediaStreamInterface* $at(uint64 index);

    MCNAPI ::webrtc::MediaStreamInterface* $find(::std::string const& id);

    MCNAPI ::webrtc::MediaStreamTrackInterface* $FindAudioTrack(::std::string const& id);

    MCNAPI ::webrtc::MediaStreamTrackInterface* $FindVideoTrack(::std::string const& id);


    // NOLINTEND
};

} // namespace webrtc
