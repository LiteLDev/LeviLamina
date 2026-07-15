#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/flat_hash_set.h"
#include "mc/external/webrtc/ArrayView.h"

namespace webrtc {

class PacketStash {
public:
    // PacketStash inner types declare
    // clang-format off
    struct StashedPacket;
    // clang-format on

    // PacketStash inner types define
    struct StashedPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk771f76;
        ::ll::UntypedStorage<8, 8> mUnkb9421d;
        // NOLINTEND

    public:
        // prevent constructor by default
        StashedPacket& operator=(StashedPacket const&);
        StashedPacket(StashedPacket const&);
        StashedPacket();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~StashedPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk6ee316;
    ::ll::UntypedStorage<8, 24> mUnk84949f;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketStash& operator=(PacketStash const&);
    PacketStash(PacketStash const&);
    PacketStash();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Add(::webrtc::ArrayView<uchar const, 18446744073709546905> packet);

    MCNAPI bool AddIfUnique(::webrtc::ArrayView<uchar const, 18446744073709546905> packet);

    MCNAPI ::webrtc::ArrayView<uchar const, 18446744073709546905> GetNext();

    MCNAPI void Prune(
        ::absl::
            flat_hash_set<uint, ::absl::hash_internal::Hash<uint>, ::std::equal_to<uint>, ::std::allocator<uint>> const&
                hashes
    );

    MCNAPI void Prune(uint max_size);

    MCNAPI void clear();

    MCNAPI ~PacketStash();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
