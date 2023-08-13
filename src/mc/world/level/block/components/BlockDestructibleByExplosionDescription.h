#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct BlockDestructibleByExplosionDescription {

public:
    // prevent constructor by default
    BlockDestructibleByExplosionDescription& operator=(BlockDestructibleByExplosionDescription const&) = delete;
    BlockDestructibleByExplosionDescription(BlockDestructibleByExplosionDescription const&)            = delete;
    BlockDestructibleByExplosionDescription()                                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getName\@BlockDestructibleByExplosionDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const;
    /**
     * @vftbl 2
     * @symbol ?initializeComponent\@BlockDestructibleByExplosionDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext&) const;
    /**
     * @symbol ?bindType\@BlockDestructibleByExplosionDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol
     * ?NameID\@BlockDestructibleByExplosionDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    // NOLINTEND
};
