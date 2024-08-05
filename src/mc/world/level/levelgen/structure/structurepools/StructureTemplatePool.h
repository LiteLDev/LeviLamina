#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Projection.h"

class StructureTemplatePool {
public:
    // prevent constructor by default
    StructureTemplatePool& operator=(StructureTemplatePool const&);
    StructureTemplatePool(StructureTemplatePool const&);
    StructureTemplatePool();

public:
    // NOLINTBEGIN
    MCAPI StructureTemplatePool(
        std::string                                                           name,
        std::string                                                           fallback,
        std::vector<std::pair<class StructurePoolElement const*, int>> const& templates
    );

    MCAPI
    StructureTemplatePool(struct StructureTemplateRegistrationContext, std::string_view, std::string_view, ::Projection, std::initializer_list<struct WeightedStructureTemplateRegistration>);

    MCAPI std::string const& getFallback() const;

    MCAPI int getMaxHeight() const;

    MCAPI std::string const& getName() const;

    MCAPI class StructurePoolElement const* getRandomTemplate(class Random& random) const;

    MCAPI std::vector<uint64> getShuffledTemplateIndexes(class Random& random) const;

    MCAPI class StructurePoolElement const* getTemplate(uint64 index) const;

    MCAPI std::vector<class StructurePoolElement const*> const& getTemplates() const;

    MCAPI bool isValid() const;

    MCAPI uint64 size() const;

    MCAPI static std::unique_ptr<class StructureTemplatePool> create(
        struct StructureTemplateRegistrationContext,
        std::string_view,
        std::string_view,
        std::initializer_list<struct WeightedStructureTemplateRegistration>,
        ::Projection
    );

    // NOLINTEND
};
