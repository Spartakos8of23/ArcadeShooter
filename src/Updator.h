#ifndef UPDATOR_H
#define UPDATOR_H

class Updator
{
	public:
		virtual ~Updator();
		virtual void Update() = 0;
};

#endif