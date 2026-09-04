#include "mc/world/attribute/BaseAttributeMap.h"
#include "mc/world/attribute/Attribute.h"
#include "mc/world/attribute/AttributeInstance.h"
#include "mc/world/attribute/AttributeInstanceRef.h"

inline void BaseAttributeMap::setDirty(AttributeInstance const& attribute) { _onAttributeModified(attribute); }

bool BaseAttributeMap::setCurrentValue(Attribute const& attribute, float value) {
    if (auto ptr = getMutableInstance(attribute).mPtr) {
        ptr->mCurrentValue = value;
        setDirty(*ptr);
        return true;
    }
    return false;
}

bool BaseAttributeMap::setMaxValue(Attribute const& attribute, float value) {
    if (auto ptr = getMutableInstance(attribute).mPtr) {
        ptr->mCurrentMaxValue = value;
        ptr->mDefaultMaxValue = value;
        float& currentValue   = ptr->mCurrentValue;
        currentValue          = std::max(currentValue, ptr->mCurrentMinValue);
        setDirty(*ptr);
        return true;
    }
    return false;
}

bool BaseAttributeMap::setDefaultValue(Attribute const& attribute, float value) {
    if (auto ptr = getMutableInstance(attribute).mPtr) {
        float& defaultValue = ptr->mDefaultValue;
        if (value != defaultValue) {
            defaultValue       = value;
            ptr->mCurrentValue = value;
            setDirty(*ptr);
            return true;
        }
    }
    return false;
}
