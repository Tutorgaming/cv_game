#include <math.h>
#include "OgreManualObject.h"
#include "OgreMaterialManager.h"
#include "AdvancedOgreFramework.hpp"
#include "OgreParticleSystem.h"


class Bullet
{

public:
	Bullet(void);
	~Bullet(void);

	void move(double timeSinceLastFrame);
	void setSceneManager(Ogre::SceneManager*		pSceneMgr){ m_pSceneMgr = pSceneMgr; }
	void create(int xPos, int yPos);
	void die();
	void reset(int xPos, int yPos);
	bool isActive(){ return m_active_flag; }

	void setGameField(Ogre::Real x, Ogre::Real y){ m_fieldX = x; m_fieldY = y; }
private:
	Ogre::Entity*			m_pBulletEntity;
	Ogre::SceneNode*		m_pBulletNode;

	Ogre::Real			m_fieldX, m_fieldY, m_fieldZ;

	Ogre::Vector3			m_BulletSpeed;
	Ogre::Degree			m_BulletOrientation;
	Ogre::Real			m_BulletAcceleration;
	Ogre::Real			m_BulletMaxSpeed;
	Ogre::Degree			m_BulletRotateSpeed;
	Ogre::Degree			m_BulletRotation;

	double				m_BulletRadius;

	Ogre::SceneManager*	m_pSceneMgr;

	bool				m_active_flag;
};
