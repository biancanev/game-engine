#include "VBO.h"

VBO::VBO(GLfloat* verticies, GLsizeiptr size) {
	glGenBuffers(1, &ID);
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	glBufferData(GL_ARRAY_BUFFER, size, verticies, GL_STATIC_DRAW);

}

void VBO::Bind() {
	glBindBuffer(GL_ARRAY_BUFFER, ID);

}

void VBO::Unbind() {
	glBindBuffer(GL_ARRAY_BUFFER, ID);
}

void VBO::Delete() {
	glDeleteBuffers(1, &ID);
}