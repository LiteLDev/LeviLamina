#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace RepairableItemComponentVersioning {

class UpgradeTo118 {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPAIRABLEITEMCOMPONENTVERSIONING_UPGRADETO118
public:
    UpgradeTo118& operator=(UpgradeTo118 const&) = delete;
    UpgradeTo118(UpgradeTo118 const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?previousSchema\@UpgradeTo118\@RepairableItemComponentVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@UpgradeTo118\@RepairableItemComponentVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const;
    /**
     * @symbol ??0UpgradeTo118\@RepairableItemComponentVersioning\@\@QEAA\@XZ
     */
    MCAPI UpgradeTo118();
};

}; // namespace RepairableItemComponentVersioning
