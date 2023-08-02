#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/GeneratorType.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionDocument.h"

class DimensionDefinitionGroup {
public:
    // DimensionDefinitionGroup inner types declare
    // clang-format off
    struct DimensionDefinition;
    // clang-format on

    // DimensionDefinitionGroup inner types define
    struct DimensionDefinition {

    public:
        int                      mHeightMinimum; // this+0x0
        int                      mHeightMaximum; // this+0x4
        enum class GeneratorType mGeneratorType; // this+0x8
    };

public:
    std::map<std::string, DimensionDefinitionGroup::DimensionDefinition> mDimensionDefinitions;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0DimensionDefinitionGroup\@\@QEAA\@QEAVResourcePackManager\@\@_N\@Z
     */
    MCAPI DimensionDefinitionGroup(class ResourcePackManager* const, bool);
    /**
     * @symbol
     * ?getDimensionDefinition\@DimensionDefinitionGroup\@\@QEBA?AV?$optional\@UDimensionDefinition\@DimensionDefinitionGroup\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::optional<struct DimensionDefinitionGroup::DimensionDefinition>
          getDimensionDefinition(std::string const&) const;
    /**
     * @symbol ?isEmpty\@DimensionDefinitionGroup\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol
     * ?tryAddDimensionDefinitionByString\@DimensionDefinitionGroup\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool tryAddDimensionDefinitionByString(std::string const&);
    /**
     * @symbol ??1DimensionDefinitionGroup\@\@QEAA\@XZ
     */
    MCAPI ~DimensionDefinitionGroup();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_checkValidDimensionBounds\@DimensionDefinitionGroup\@\@AEAA_NAEBUDimension\@DimensionDocument\@\@\@Z
     */
    MCAPI bool _checkValidDimensionBounds(struct DimensionDocument::Dimension const&);
    // NOLINTEND
};
