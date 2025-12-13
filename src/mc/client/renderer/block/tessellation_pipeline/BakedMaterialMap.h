#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockMaterialInstancesComponent;
namespace ClientBlockPipeline { class Material; }
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

namespace ClientBlockPipeline {

struct BakedMaterialMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk880f0b;
    ::ll::UntypedStorage<1, 1>  mUnk57b2c1;
    ::ll::UntypedStorage<1, 1>  mUnkd8b6db;
    ::ll::UntypedStorage<1, 1>  mUnk1e12aa;
    ::ll::UntypedStorage<1, 1>  mUnk3ec1ca;
    ::ll::UntypedStorage<1, 1>  mUnkfd6b3e;
    // NOLINTEND

public:
    // prevent constructor by default
    BakedMaterialMap& operator=(BakedMaterialMap const&);
    BakedMaterialMap(BakedMaterialMap const&);
    BakedMaterialMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::std::shared_ptr<::ClientBlockPipeline::Material const> _lookupMaterialInfo(
        ::ClientBlockPipeline::BlockSchematic const& blockSchematic,
        ::BlockMaterialInstancesComponent const&     materialInstance,
        ::std::string const&                         materialInstanceName
    );

    MCNAPI_C void bake(
        ::ClientBlockPipeline::BlockSchematic const& blockSchematic,
        ::BlockMaterialInstancesComponent const&     materialInstance
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::add_lvalue_reference_t<char const[]> MATERIAL_INSTANCE_FIND_ERROR();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
