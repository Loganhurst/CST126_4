// CST1264.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>

#include "term.h"
#include "LinkedList.h"

using namespace std;
int main()
{
	string name;
	string def;
	int year;
	Term agile[10];
	agile[0].define(
		name = "Epic",
		def = "An epic is a large user story that cannot be delivered as defined within a single iteration or is large enough that it can be split into smaller user stories.",
		year = 2004
	);
	agile[1].define(
		name = "Daily Meeting",
		def = "The daily meeting is one of the most commonly practiced Agile techniques and presents opportunity for a team to get together on a regular basis to coordinate their activities.",
		year =	2004
	);
	agile[2].define(
		name = "Burndown Chart",
		def = "Burndown charts and burnup charts track the amount of output (in terms of hours, story points, or backlog items) a team has completed across an iteration or a project. ",
		year = 2000
	);
	agile[3].define(
		name = "Backlog Grooming",
		def = "Backlog grooming is when the product owner and some, or all, of the rest of the team refine the backlog on a regular basis to ensure the backlog contains the appropriate items, that they are prioritized, and that the items at the top of the backlog are ready for delivery. ",
		year = 2005
	);
	agile[4].define(
		name = 	"Antipattern",
		def = "Antipatterns are common solutions to common problems where the solution is ineffective and may result in undesired consequences.",
		year = 	1998
	);
	agile[5].define(
		name = "Acceptance Test Driven Development",
		def = "Acceptance Test Driven Development (ATDD) involves team members with different perspectives (customer, development, testing) collaborating to write acceptance tests in advance of implementing the corresponding functionality.",
		year = 2003
	);
	agile[6].define(
		name = "Collective Ownership",
		def = "Collective code ownership is the explicit convention that every team member can make changes to any code file as necessary: either to complete a development task, to repair a defect, or to improve the code's overall structure.",
		year = 1996
	);
	agile[7].define(
		name = "Heartbeat Retrospective",
		def = "The team meets regularly to reflect on the most significant events that occurred since the previous such meeting, and identify opportunities  for improvement.",
		year = 2006
	);
	agile[8].define(
		name = "Iteration",
		def = "An iteration is a timebox during which development takes place. The  duration may vary from project to project and is usually fixed.",
		year = 	1998
	);
	agile[9].define(
		name = "Kanban",
		def = "The Kanban Method is a means to design, manage and improve flow for knowledge work and allows teams to start where they are to drive evolutionary change. ",
		year = 	2010
	);




	LinkedList * list = new LinkedList();
	for (int i = 0; i < 10; ++i)
	{
		list->add_node(agile[i]);
	}
	list->print();
	cout << "List Length: " << list->length() << endl;
	list->find_Term();

	delete list;

    return 0;
}

