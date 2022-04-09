#include "bintree.h"
#include <iostream>


/*--------------------------FUNCTION-----------------------------------------*/
TreeNode::TreeNode():
	data_ ( {} ),

	left_ ( nullptr ), //false statement
	right_ ( nullptr ), //true statement

	depth_ ( 0 )
{

}


/*--------------------------FUNCTION-----------------------------------------*/
TreeNode::TreeNode( const char* data ):
	data_ ( data ),

	left_ ( nullptr ), //false statement
	right_ ( nullptr ), //true statement

	depth_ ( 0 )
{

}


/*--------------------------FUNCTION-----------------------------------------*/
TreeNode::~TreeNode()
{

}


/*--------------------------FUNCTION-----------------------------------------*/
int TreeNode::stdprint()
{
	std::cout << data_ << "\n";

	if( left_ )
	{
		left_->stdprint();
	}
	if( right_ )
	{
		right_->stdprint();
	}

	return 0;
}


/*--------------------------FUNCTION-----------------------------------------*/
Tree::Tree():
	root_ ( nullptr ),
	maxdepth_ ( 0 )
{

}


/*--------------------------FUNCTION-----------------------------------------*/
Tree::~Tree()
{

}


/*--------------------------FUNCTION-----------------------------------------*/
int Tree::fileinput( const char* filename )
{

}


/*--------------------------FUNCTION-----------------------------------------*/
int Tree::fileoutput( const char* filename )
{
	FILE* outfile = fopen( filename, "w" );

}


/*--------------------------FUNCTION-----------------------------------------*/
int Tree::stdoutput()
{
	root_->stdprint();

	return 0;
}
