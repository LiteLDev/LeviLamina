#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct OffspringDefinition {
public:
    // OffspringDefinition inner types declare
    // clang-format off
    struct DenySameParentsVariantData;
    struct MutationFactorData;
    struct PropertyGeneticData;
    // clang-format on

    // OffspringDefinition inner types define
    enum class MutationStrategy : uchar {
        None   = 0,
        Random = 1,
    };

    struct DenySameParentsVariantData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk7bf2fe;
        ::ll::UntypedStorage<4, 4> mUnk1fa856;
        ::ll::UntypedStorage<4, 4> mUnk7fc226;
        // NOLINTEND

    public:
        // prevent constructor by default
        DenySameParentsVariantData& operator=(DenySameParentsVariantData const&);
        DenySameParentsVariantData(DenySameParentsVariantData const&);
        DenySameParentsVariantData();
    };

    struct MutationFactorData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkf85d00;
        ::ll::UntypedStorage<4, 4> mUnk62896f;
        ::ll::UntypedStorage<4, 4> mUnk6b7966;
        // NOLINTEND

    public:
        // prevent constructor by default
        MutationFactorData& operator=(MutationFactorData const&);
        MutationFactorData(MutationFactorData const&);
        MutationFactorData();
    };

    struct PropertyGeneticData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk280129;
        ::ll::UntypedStorage<8, 24> mUnk658c82;
        // NOLINTEND

    public:
        // prevent constructor by default
        PropertyGeneticData& operator=(PropertyGeneticData const&);
        PropertyGeneticData(PropertyGeneticData const&);
        PropertyGeneticData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::OffspringDefinition::PropertyGeneticData& operator=(::OffspringDefinition::PropertyGeneticData&&);

        MCAPI ~PropertyGeneticData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk79e8e2;
    ::ll::UntypedStorage<8, 24> mUnk6d3ac1;
    ::ll::UntypedStorage<4, 12> mUnk7463c1;
    ::ll::UntypedStorage<1, 1>  mUnkf81be6;
    ::ll::UntypedStorage<1, 1>  mUnk7aa83f;
    ::ll::UntypedStorage<1, 1>  mUnkd8a6a4;
    ::ll::UntypedStorage<1, 1>  mUnk1af3aa;
    ::ll::UntypedStorage<4, 8>  mUnk6ec631;
    ::ll::UntypedStorage<4, 8>  mUnk9a0fe1;
    ::ll::UntypedStorage<4, 12> mUnkf2d366;
    ::ll::UntypedStorage<8, 48> mUnk57c934;
    // NOLINTEND

public:
    // prevent constructor by default
    OffspringDefinition& operator=(OffspringDefinition const&);
    OffspringDefinition(OffspringDefinition const&);
    OffspringDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setMutationStrategy(::std::string const& strategy);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::OffspringDefinition>>& root
    );
    // NOLINTEND
};
