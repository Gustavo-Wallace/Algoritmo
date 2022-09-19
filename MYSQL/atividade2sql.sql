create database tabelas;

create table Cliente(
id int(4) not null auto_increment,
cpf int(11) not null,
nome varchar(30) not null,
idade int(3) not null,
sexo char(1) not null,
check (sexo = 'm' or sexo = 'f')
check (idade >= 12)
primary key (id)
);

create table Vendedor(
id int(4) not null auto_increment,
nome varchar(30) not null,
loja varchar(10) not null,
primary key (id)
);

create table Pedido(
id int(4) not null auto_increment,
constraint clienteC foreign key(id) references Cliente(id)
constraint vendedorC foreign key(id) references Vendedor(id)
constraint produtoC foreign key(id) references Produto(id)
primary key (id)
);

create table Produto(
id int(4) not null auto_increment,
categoria varchar(20) not null,
preco varchar(30) not null,
primary key (id)
);