#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/Projection.h"

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

    MCAPI StructureTemplatePool(
        struct StructureTemplateRegistrationContext                         context,
        std::string_view                                                    name,
        std::string_view                                                    fallback,
        ::Projection                                                        projection,
        std::initializer_list<struct WeightedStructureTemplateRegistration> pieces
    );

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
        struct StructureTemplateRegistrationContext                         context,
        std::string_view                                                    name,
        std::string_view                                                    fallback,
        std::initializer_list<struct WeightedStructureTemplateRegistration> pieces,
        ::Projection                                                        projection
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
