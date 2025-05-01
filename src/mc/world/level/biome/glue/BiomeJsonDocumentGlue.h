#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
namespace SharedTypes::v1_20_60 { struct BiomeJsonDocument; }
// clang-format on

struct BiomeJsonDocumentGlue {
public:
    // BiomeJsonDocumentGlue inner types declare
    // clang-format off
    struct ResolvedBiomeData;
    // clang-format on

    // BiomeJsonDocumentGlue inner types define
    struct ResolvedBiomeData {
    public:
        // ResolvedBiomeData inner types declare
        // clang-format off
        struct ResolvedComponent;
        // clang-format on

        // ResolvedBiomeData inner types define
        struct ResolvedComponent {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 16> mUnk37f5b0;
            ::ll::UntypedStorage<8, 16> mUnka3b348;
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
        ::ll::UntypedStorage<8, 24> mUnk61e6cf;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolvedBiomeData& operator=(ResolvedBiomeData const&);
        ResolvedBiomeData(ResolvedBiomeData const&);
        ResolvedBiomeData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ResolvedBiomeData();
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
    ::ll::UntypedStorage<8, 16> mUnk627897;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeJsonDocumentGlue& operator=(BiomeJsonDocumentGlue const&);
    BiomeJsonDocumentGlue(BiomeJsonDocumentGlue const&);
    BiomeJsonDocumentGlue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::BiomeJsonDocumentGlue::ResolvedBiomeData> getResolvedBiomeData(
        ::SharedTypes::v1_20_60::BiomeJsonDocument const& biomeJsonDocument,
        ::BiomeRegistry const&                            biomeRegistry
    ) const;
    // NOLINTEND
};
