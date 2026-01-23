#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/clientbiome/ClientBiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
struct DeferredRenderingBiomeRegistry;
struct FogDefinitionRegistry;
// clang-format on

struct ClientBiomeJsonDocumentGlue {
public:
    // ClientBiomeJsonDocumentGlue inner types declare
    // clang-format off
    struct ResolvedClientBiomeData;
    // clang-format on

    // ClientBiomeJsonDocumentGlue inner types define
    struct ResolvedClientBiomeData {
    public:
        // ResolvedClientBiomeData inner types declare
        // clang-format off
        struct ResolvedComponent;
        // clang-format on

        // ResolvedClientBiomeData inner types define
        struct ResolvedComponent {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 16> mUnk5c0d4b;
            ::ll::UntypedStorage<8, 16> mUnk2afd7a;
            // NOLINTEND

        public:
            // prevent constructor by default
            ResolvedComponent& operator=(ResolvedComponent const&);
            ResolvedComponent(ResolvedComponent const&);
            ResolvedComponent();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ~ResolvedComponent();
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
        ::ll::UntypedStorage<8, 24> mUnk391d8c;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolvedClientBiomeData& operator=(ResolvedClientBiomeData const&);
        ResolvedClientBiomeData(ResolvedClientBiomeData const&);
        ResolvedClientBiomeData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ResolvedClientBiomeData();
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
    ::ll::UntypedStorage<8, 16> mUnk6fa67f;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientBiomeJsonDocumentGlue& operator=(ClientBiomeJsonDocumentGlue const&);
    ClientBiomeJsonDocumentGlue(ClientBiomeJsonDocumentGlue const&);
    ClientBiomeJsonDocumentGlue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::ClientBiomeJsonDocumentGlue::ResolvedClientBiomeData> getResolvedBiomeData(
        ::SharedTypes::v1_21_130::ClientBiomeJsonDocument::ClientBiomeJsonObject const& clientBiomeJsonObject,
        ::FogDefinitionRegistry const&                                                  fogRegistry,
        ::DeferredRenderingBiomeRegistry const&                                         deferredBiomeRegistry
    ) const;

    MCNAPI ~ClientBiomeJsonDocumentGlue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
