#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class CompoundTag;
class IBlockArchetype;
class Material;
// clang-format on

class BlockArchetypeFactory : public ::Factory<::BlockType> {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockType& createBlock(
        ::std::shared_ptr<::IBlockArchetype> blockArchetype,
        ::std::string const&                 blockName,
        int                                  blockID,
        ::Material const&                    material
    );

    MCAPI static void
    initializeArchetypeFromNetwork(::CompoundTag const& tag, ::std::shared_ptr<::IBlockArchetype>& blockArchetype);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<
        ::std::string,
        ::std::function<
            ::BlockType&(::std::shared_ptr<::IBlockArchetype>, ::std::string const&, int, ::Material const&)>>&
    mRegisteredArchetypeConstructors();

    MCAPI static ::std::unordered_map<::std::string, ::std::function<::std::shared_ptr<::IBlockArchetype>()>>&
    mRegisteredArchetypes();
    // NOLINTEND
};
