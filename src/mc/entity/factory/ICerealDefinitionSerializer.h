#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IDefinitionInstance;
class MinEngineVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ICerealDefinitionSerializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc4f8e2;
    // NOLINTEND

public:
    // prevent constructor by default
    ICerealDefinitionSerializer& operator=(ICerealDefinitionSerializer const&);
    ICerealDefinitionSerializer(ICerealDefinitionSerializer const&);
    ICerealDefinitionSerializer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ICerealDefinitionSerializer() = default;

    // vIndex: 2
    virtual ::std::shared_ptr<::IDefinitionInstance>
    serializeDefinitionInstance(::rapidjson::GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const&, ::MinEngineVersion const&, ::cereal::ReflectionCtx const&)
        const = 0;

    // vIndex: 1
    virtual ::std::shared_ptr<::IDefinitionInstance>
    serializeDefinitionInstance(::gsl::not_null<::CompoundTag const*>, ::MinEngineVersion const&, ::cereal::ReflectionCtx const&)
        const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
