#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockGeometryVersioning {

class BlockGeometry12010Upgrade {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKGEOMETRYVERSIONING_BLOCKGEOMETRY12010UPGRADE
public:
    BlockGeometry12010Upgrade& operator=(BlockGeometry12010Upgrade const&) = delete;
    BlockGeometry12010Upgrade(BlockGeometry12010Upgrade const&)            = delete;
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
     * ?previousSchema\@BlockGeometry12010Upgrade\@BlockGeometryVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockGeometry12010Upgrade\@BlockGeometryVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const;
    /**
     * @symbol ??0BlockGeometry12010Upgrade\@BlockGeometryVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockGeometry12010Upgrade();
};

}; // namespace BlockGeometryVersioning
