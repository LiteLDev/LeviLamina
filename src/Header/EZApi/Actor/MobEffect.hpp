// This header is Generate By WangYneos's Generator
// FileName:MobEffect
// Class:MobEffect
#pragma once
#include "../dll.h"

#include <string>
#include <memory>
#include <vector>

class MobEffect {
public:
	MCAPI MobEffect(int, std::string const&, std::string const&, bool, int, int, std::string const&, bool);
	MCAPI virtual ~MobEffect(void);

	MCAPI virtual void applyEffects(class Actor*, int, int)const;
	MCAPI virtual void applyInstantaneousEffect(class Actor*, class Actor*, class Actor*, int, float)const;
	MCAPI virtual float getAttributeModifierValue(int, class AttributeModifier const&)const;
	MCAPI virtual void removeEffects(class Actor*);
	MCAPI void addAttributeBuff(class Attribute const&, std::shared_ptr<class AttributeBuff>);
	MCAPI void addAttributeModifier(class Attribute const&, std::shared_ptr<class AttributeModifier>);
	MCAPI static class MobEffect* getById(int);
	MCAPI static class MobEffect* getByName(std::string const&);
	MCAPI class HashedString const& getComponentName(void)const;
	MCAPI std::string const& getDescriptionId(void)const;
	MCAPI float getDurationModifier(void)const;
	MCAPI unsigned int getId(void)const;
	MCAPI std::string const& getResourceName(void)const;
	MCAPI static void initEffects(class ResourcePackManager*);
	MCAPI bool isHarmful(void)const;
	MCAPI bool isVisible(void)const;
	MCAPI static class std::unique_ptr<class MobEffect, struct std::default_delete<class MobEffect> >* mMobEffects;
	MCAPI void setDurationAmplifier(std::shared_ptr<class Amplifier>);
	MCAPI void setValueAmplifier(std::shared_ptr<class Amplifier>);
	MCAPI static void shutdownEffects(void);
	MCAPI class std::vector<struct std::pair<class Attribute const*, std::shared_ptr<class AttributeModifier> >, class std::allocator<struct std::pair<class Attribute const*, std::shared_ptr<class AttributeModifier> > > > const& viewAttributeModifiers(void)const;


	//MCAPI static class mce::Color const DEFAULT_COLOR;
	MCAPI static class MobEffect* ABSORPTION;
	MCAPI static class MobEffect* BAD_OMEN;
	MCAPI static class MobEffect* DAMAGE_BOOST;
	MCAPI static class MobEffect* MOVEMENT_SLOWDOWN;
	MCAPI static class MobEffect* BLINDNESS;
	MCAPI static class MobEffect* CONDUIT_POWER;
	MCAPI static class MobEffect* CONFUSION;
	MCAPI static class MobEffect* DAMAGE_RESISTANCE;
	MCAPI static class MobEffect* DIG_SLOWDOWN;
	MCAPI static class MobEffect* DIG_SPEED;
	MCAPI static class MobEffect* EMPTY_EFFECT;
	MCAPI static class MobEffect* FATAL_POISON;
	MCAPI static class MobEffect* FIRE_RESISTANCE;
	MCAPI static class MobEffect* HARM;
	MCAPI static class MobEffect* HEAL;
	MCAPI static class MobEffect* HEALTH_BOOST;
	MCAPI static class MobEffect* HERO_OF_THE_VILLAGE;
	MCAPI static class MobEffect* HUNGER;
	MCAPI static class MobEffect* INVISIBILITY;
	MCAPI static class MobEffect* JUMP;
	MCAPI static class MobEffect* LEVITATION;
	MCAPI static class MobEffect* MOVEMENT_SPEED;
	MCAPI static class MobEffect* NIGHT_VISION;
	MCAPI static class MobEffect* POISON;
	MCAPI static class MobEffect* REGENERATION;
	MCAPI static class MobEffect* SATURATION;
	MCAPI static class MobEffect* SLOW_FALLING;
	MCAPI static class MobEffect* WATER_BREATHING;
	MCAPI static class MobEffect* WEAKNESS;
	MCAPI static class MobEffect* WITHER;

};
