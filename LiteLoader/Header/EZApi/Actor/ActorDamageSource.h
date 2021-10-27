#include "ActorType.h"
#include "ActorUniqueID.h"
#include <cstring>
#include <loader/Loader.h>
class ActorUniqueID;
enum class ActorType;
enum class ActorCategory;

class ActorDamageSource {
public:
    MCAPI virtual ~ActorDamageSource();
    MCAPI virtual bool                    isEntitySource(void);
    MCAPI virtual bool                    isChildEntitySource(void);
    MCAPI virtual bool                    isBlockSource(void);
    MCAPI virtual bool                    isFire(void);
    MCAPI virtual std::string             getDeathMessage(void);
    MCAPI virtual bool                    getIsCreative(void);
    MCAPI virtual bool                    getIsWorldBuilder(void);
    MCAPI virtual class ActorUniqueID     getEntityUniqueID(void);
    MCAPI virtual enum ActorType          getEntityType(void) const;
    MCAPI virtual enum ActorCategory      getEntityCategories(void);
    MCAPI virtual bool                    getDamagingEntityIsCreative(void);
    MCAPI virtual bool                    getDamagingEntityIsWorldBuilder(void);
    MCAPI virtual class ActorUniqueID     getDamagingEntityUniqueID(void);
    MCAPI virtual enum ActorType          getDamagingEntityType(void);
    MCAPI virtual enum ActorCategory      getDamagingEntityCategories(void);
    MCAPI virtual class ActorDamageSource clone(void);
};