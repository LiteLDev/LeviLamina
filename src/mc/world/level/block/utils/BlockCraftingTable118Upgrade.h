#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockCraftingTableVersioning {

class BlockCraftingTable118Upgrade {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCRAFTINGTABLEVERSIONING_BLOCKCRAFTINGTABLE118UPGRADE
public:
    BlockCraftingTable118Upgrade& operator=(BlockCraftingTable118Upgrade const&) = delete;
    BlockCraftingTable118Upgrade(BlockCraftingTable118Upgrade const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?previousSchema\@BlockCraftingTable118Upgrade\@BlockCraftingTableVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockCraftingTable118Upgrade\@BlockCraftingTableVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const;
    /**
     * @symbol ??0BlockCraftingTable118Upgrade\@BlockCraftingTableVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockCraftingTable118Upgrade();
};

}; // namespace BlockCraftingTableVersioning
