#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct BlockMapColorDescription {

public:
    // prevent constructor by default
    BlockMapColorDescription& operator=(BlockMapColorDescription const&) = delete;
    BlockMapColorDescription(BlockMapColorDescription const&)            = delete;
    BlockMapColorDescription()                                           = delete;

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
     * ?getName\@BlockMapColorDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const;
    /**
     * @vftbl 3
     * @symbol ?initializeComponent\@BlockMapColorDescription\@\@UEBAXAEAVBlockComponentStorage\@\@\@Z
     */
    virtual void initializeComponent(class BlockComponentStorage&) const;
    /**
     * @symbol ?bindType\@BlockMapColorDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol
     * ?NameID\@BlockMapColorDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    // NOLINTEND
};
