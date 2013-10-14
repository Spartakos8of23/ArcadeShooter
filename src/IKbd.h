#ifndef IKBD_H
#define IKBD_H

/*
 * IKbd interface.
 * This interface should be implemented by
 * every class that will provide keyboard input
 * to the GameEngine.
 */

class IKbd
{
	public:
		virtual ~IKbd();
		virtual void Update() = 0;
		virtual bool isKeyPressed(int keycode) = 0;
		virtual bool onPress(int keycode) = 0;
		virtual bool onRelease(int keycode) = 0;
};

#endif