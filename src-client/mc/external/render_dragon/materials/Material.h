#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/CheckedRingBuffer.h"
#include "mc/deps/core/memory/RingAllocatorContainer.h"
#include "mc/external/render_dragon/materials/MaterialUniformAlias.h"
#include "mc/external/render_dragon/materials/MaterialUniformHandles.h"
#include "mc/external/render_dragon/materials/MaterialUniformName.h"
#include "mc/external/render_dragon/materials/definition/PropertyField.h"
#include "mc/external/render_dragon/materials/definition/StageInputMap.h"
#include "mc/external/render_dragon/platform/GraphicsPlatform.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace dragon { class ResolvedTextureResource; }
namespace dragon::materials { class CompiledMaterialDefinition; }
namespace dragon::materials { class Pass; }
namespace dragon::materials { struct MaterialUniformMap; }
namespace dragon::materials { struct SamplerSlot; }
namespace dragon::materials::definition { struct ExternalUniformDeclaration; }
namespace dragon::materials::definition { struct SamplerDefinition; }
// clang-format on

namespace dragon::materials {

class Material {
public:
    // Material inner types define
    using SamplerSlots = ::std::vector<::std::optional<::dragon::materials::SamplerSlot>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::pair<
            ::dragon::materials::MaterialUniformName,
            ::mce::ServerResourcePointer<::dragon::ResolvedTextureResource>>>>
                                                                                         mCSSTextures;
    ::ll::TypedStorage<4, 4, uint const>                                                 mId;
    ::ll::TypedStorage<8, 264, ::dragon::platform::GraphicsPlatform const>               mPlatform;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                            mParentName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::dragon::materials::MaterialUniformMap>> mDefaultUniforms;
    ::ll::TypedStorage<8, 192, ::Core::RingAllocatorContainer<uchar, 2, 0, ::Core::CheckedRingBuffer<2, 0>>>
                                                                                        mDefaultUniformsData;
    ::ll::TypedStorage<8, 24, ::dragon::materials::MaterialUniformHandles>              mUniformHandles;
    ::ll::TypedStorage<8, 64, ::dragon::materials::definition::StageInputMap>           mCombinedVertexInputDesc;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                             mPassNames;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string> const> mGlobalFlags;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::dragon::materials::CompiledMaterialDefinition const>>
        mSharedMaterialDefinition;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::HashedString,
            ::std::shared_ptr<::dragon::materials::Pass>,
            ::std::less<::HashedString>,
            ::std::vector<::HashedString>,
            ::std::vector<::std::shared_ptr<::dragon::materials::Pass>>>>
        mPasses;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::std::variant<
                ::std::monostate,
                ::dragon::materials::definition::PropertyField<::glm::vec4, ::std::optional<::glm::vec4>>,
                ::dragon::materials::definition::PropertyField<::glm::mat3x3, ::std::optional<::glm::mat3x3>>,
                ::dragon::materials::definition::PropertyField<::glm::mat4x4, ::std::optional<::glm::mat4x4>>,
                ::dragon::materials::definition::PropertyField<
                    ::dragon::materials::definition::ExternalUniformDeclaration,
                    ::std::optional<::dragon::materials::definition::ExternalUniformDeclaration>>>>>
        mProperties;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::dragon::materials::MaterialUniformName, ::dragon::materials::MaterialUniformAlias>>
        mPropertyNameToAlias;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::dragon::materials::MaterialUniformAlias,
            ::std::vector<::dragon::materials::MaterialUniformName>>>
        mPropertyAliasToName;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::dragon::materials::definition::SamplerDefinition>>
        mIndexedSamplers;
    ::ll::TypedStorage<8, 72, ::std::array<::std::vector<::std::optional<::dragon::materials::SamplerSlot>>, 3>>
        mSamplerSlots;
    // NOLINTEND

public:
    // prevent constructor by default
    Material();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Material(
        ::dragon::materials::CompiledMaterialDefinition const&    materialDefinition,
        ::std::unordered_map<::std::string, ::std::string> const& globalFlags,
        ::std::optional<::dragon::platform::GraphicsPlatform>     platform
    );

    MCNAPI void _loadMaterial(::dragon::materials::CompiledMaterialDefinition const& materialDefinition);

    MCNAPI ~Material();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::atomic<uint>& sNextId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::dragon::materials::CompiledMaterialDefinition const&    materialDefinition,
        ::std::unordered_map<::std::string, ::std::string> const& globalFlags,
        ::std::optional<::dragon::platform::GraphicsPlatform>     platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::materials
