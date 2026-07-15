#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CompoundTag;
class Container;
class LevelChunk;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class IVanillaMainBlockActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockActorType getBlockActorType() const = 0;

    virtual ::Container* getContainer() = 0;

    virtual ::Container const* getContainer() const = 0;

    virtual void eraseLootTable() = 0;

    virtual ::std::string getName() const = 0;

    virtual ::std::string getImmersiveReaderText(::BlockSource& region) = 0;

    virtual bool canRenderCustomName() const = 0;

    virtual bool hasCustomName() const = 0;

    virtual ::Bedrock::Safety::RedactableString const& getCustomName() const = 0;

    virtual void setCustomName(::Bedrock::Safety::RedactableString const& name) = 0;

    virtual bool isCustomNameSaved() const = 0;

    virtual ::Bedrock::Safety::RedactableString getDisplayName() const = 0;

    virtual bool hasFilteredNameTag() const = 0;

    virtual ::std::string getFilteredNameTag() const = 0;

    virtual void setFilteredNameTag(::std::string const& filteredName) = 0;

    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const& tag) const = 0;

    virtual ::std::vector<::std::string> getFilteredUgcStrings(::CompoundTag const& tag) const = 0;

    virtual void setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const = 0;

    virtual void setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const = 0;

    virtual bool validateData(::CompoundTag const& tag) const = 0;

    virtual void fixupOnLoad(::LevelChunk& lc) = 0;

    virtual void setChanged() = 0;

    virtual bool isChanged() const = 0;

    virtual void onChanged(::BlockSource& region) = 0;

    virtual void _setCanRenderCustomName(bool value) = 0;

    virtual void _setCustomNameSaved(bool saveCustomName) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
