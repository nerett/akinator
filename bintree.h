#ifndef BINTREE_H_INCLUDED
#define BINTREE_H_INCLUDED


#include <string>


typedef std::string tree_element_t;


class TreeNode
{
	friend class Tree;
	friend class Akinator;

	public:
	//private:

		tree_element_t data_;

		TreeNode* left_; //false statement
		TreeNode* right_; //true statement

		size_t depth_;

	public:

	public:
	//private:

		int stdprint();

	public:

		explicit TreeNode();
		explicit TreeNode( const char* data );
		~TreeNode();

		TreeNode operator= ( TreeNode& some_node ) = delete;
};


class Tree
{
	public:
	//private:

		TreeNode* root_;
		size_t maxdepth_;

	public:

	public:
	//private:

		int fileinput( const char* filename );
		int fileoutput( const char* filename );

		int stdoutput();

	public:

		explicit Tree();
		~Tree();

		Tree operator= ( Tree& some_node ) = delete;
};


#endif //BINTREE_H_INCLUDED