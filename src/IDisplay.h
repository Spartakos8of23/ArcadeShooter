#ifndef IDISPLAY_H
#define IDISPLAY_H

/*
 * IDisplay interface.
 * An interface that should be implemented by
 * the classes that represent a render location for the
 * game, that use page-flipping.
 */

class IDisplay
{
	public:
		virtual ~IDisplay();
		virtual void Clear() = 0;
		virtual void FlipBuffers() = 0;
		virtual void onClose() = 0;
};

#endif // !IDISPLAY_H
