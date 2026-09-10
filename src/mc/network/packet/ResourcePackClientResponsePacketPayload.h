#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ResourcePackResponse.h"

struct ResourcePackClientResponsePacketPayload {
public:
    // ResourcePackClientResponsePacketPayload inner types declare
    // clang-format off
    struct Cancel;
    struct Downloading;
    struct DownloadingFinished;
    struct ResourcePackStackFinished;
    // clang-format on

    // ResourcePackClientResponsePacketPayload inner types define
    struct Cancel {};

    struct Downloading {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::set<::std::string>> mDownloadingPacks;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ~Downloading();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD void $dtor();
#endif
        // NOLINTEND
    };

    struct DownloadingFinished {};

    struct ResourcePackStackFinished {};

    using Response = ::std::variant<
        ::ResourcePackClientResponsePacketPayload::Cancel,
        ::ResourcePackClientResponsePacketPayload::Downloading,
        ::ResourcePackClientResponsePacketPayload::DownloadingFinished,
        ::ResourcePackClientResponsePacketPayload::ResourcePackStackFinished>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::variant<
            ::ResourcePackClientResponsePacketPayload::Cancel,
            ::ResourcePackClientResponsePacketPayload::Downloading,
            ::ResourcePackClientResponsePacketPayload::DownloadingFinished,
            ::ResourcePackClientResponsePacketPayload::ResourcePackStackFinished>>
        mResponse;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ResourcePackClientResponsePacketPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit ResourcePackClientResponsePacketPayload(::ResourcePackResponse response);

    MCAPI ResourcePackClientResponsePacketPayload(
        ::ResourcePackResponse    response,
        ::std::set<::std::string> downloadingPacks
    );
#endif

    MCAPI ::std::set<::std::string> const& getDownloadingPacks() const;

    MCAPI ~ResourcePackClientResponsePacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ResourcePackResponse response);

    MCAPI void* $ctor(::ResourcePackResponse response, ::std::set<::std::string> downloadingPacks);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
