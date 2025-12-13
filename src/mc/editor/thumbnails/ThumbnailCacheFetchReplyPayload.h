#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ThumbnailFileBytes; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class ThumbnailCacheFetchReplyPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ThumbnailCacheFetchReplyPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka9457b;
    ::ll::UntypedStorage<4, 4>  mUnk1889d1;
    ::ll::UntypedStorage<8, 48> mUnkfea430;
    // NOLINTEND

public:
    // prevent constructor by default
    ThumbnailCacheFetchReplyPayload& operator=(ThumbnailCacheFetchReplyPayload const&);
    ThumbnailCacheFetchReplyPayload(ThumbnailCacheFetchReplyPayload const&);
    ThumbnailCacheFetchReplyPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ThumbnailCacheFetchReplyPayload() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ThumbnailCacheFetchReplyPayload(
        ::mce::UUID const&                                          id,
        uint                                                        hash,
        ::std::variant<::Editor::ThumbnailFileBytes, ::std::string> data
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::mce::UUID const& id, uint hash, ::std::variant<::Editor::ThumbnailFileBytes, ::std::string> data);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
