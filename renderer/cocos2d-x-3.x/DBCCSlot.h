#ifndef __DBCC_SLOT_H__
#define __DBCC_SLOT_H__

#include "../dragonBones/DragonBonesHeaders.h"
#include "cocos2d.h"

NAME_SPACE_DRAGON_BONES_BEGIN
class DBCCSlot : public Slot
{
private:
    cocos2d::Sprite *_spriteDisplay;
    
public:
    DBCCSlot(SlotData *slotData);
    virtual ~DBCCSlot();
    virtual void dispose() override;
    
protected:
    virtual int getDisplayZIndex() const override;
    virtual void addDisplayToContainer(void *container, int zIndex) override;
    virtual void removeDisplayFromContainer() override;
    virtual void updateDisplay(void *display, bool disposeExisting) override;
    virtual void updateDisplayBlendMode(const BlendMode &blendMode) override;
    virtual void updateDisplayColor(int aOffset, int rOffset, int gOffset, int bOffset, float aMultiplier, float rMultiplier, float gMultiplier, float bMultiplier) override;
    virtual void updateDisplayVisible(bool visible) override;
    virtual void updateDisplayTransform() override;
    
private:
    DRAGON_BONES_DISALLOW_COPY_AND_ASSIGN(DBCCSlot);
};
NAME_SPACE_DRAGON_BONES_END

#endif  // __DBCC_SLOT_H__