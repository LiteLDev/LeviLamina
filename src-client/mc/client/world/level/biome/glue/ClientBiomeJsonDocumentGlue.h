#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        struct ResolvedEnvironmentAttribute;
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
        };

        struct ResolvedEnvironmentAttribute {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk566e95;
            ::ll::UntypedStorage<8, 16> mUnkae4184;
            ::ll::UntypedStorage<8, 64> mUnk8ac22e;
            // NOLINTEND

        public:
            // prevent constructor by default
            ResolvedEnvironmentAttribute& operator=(ResolvedEnvironmentAttribute const&);
            ResolvedEnvironmentAttribute(ResolvedEnvironmentAttribute const&);
            ResolvedEnvironmentAttribute();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkfe04c5;
        ::ll::UntypedStorage<8, 24> mUnk4a3f30;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolvedClientBiomeData& operator=(ResolvedClientBiomeData const&);
        ResolvedClientBiomeData(ResolvedClientBiomeData const&);
        ResolvedClientBiomeData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfbd184;
    ::ll::UntypedStorage<8, 16> mUnkadf5b0;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientBiomeJsonDocumentGlue& operator=(ClientBiomeJsonDocumentGlue const&);
    ClientBiomeJsonDocumentGlue(ClientBiomeJsonDocumentGlue const&);
    ClientBiomeJsonDocumentGlue();
};
