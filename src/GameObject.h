#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
	private:
		
	public:
		//All subclasses must have this function (obviously) so they can update themselves.
		virtual void Update() = 0;
};

#endif