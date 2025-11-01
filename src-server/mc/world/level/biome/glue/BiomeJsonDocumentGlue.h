#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_120/biome/BiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
struct IBiomeComponentGlue;
namespace SharedTypes::v1_20_60 { struct IBiomeJsonComponent; }
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
            ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::IBiomeComponentGlue>>> mComponentGlue;
            ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::SharedTypes::v1_20_60::IBiomeJsonComponent>>> mJsonComponent;
            // NOLINTEND
        
        public:
            // member functions
            // NOLINTBEGIN
            MCAPI ~ResolvedComponent();
            // NOLINTEND
        
        public:
            // destructor thunk
            // NOLINTBEGIN
            MCFOLD void $dtor();
            // NOLINTEND
        
        };
        
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::BiomeJsonDocumentGlue::ResolvedBiomeData::ResolvedComponent>> mResolvedComponents;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ResolvedBiomeData();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::function<::std::shared_ptr<::IBiomeComponentGlue>()>>> mComponentGlueFactories;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::BiomeJsonDocumentGlue::ResolvedBiomeData> getResolvedBiomeData(::SharedTypes::v1_21_120::BiomeJsonDocument::BiomeJsonObject const& biomeJsonDocument, ::BiomeRegistry const& biomeRegistry) const;
    // NOLINTEND

};
